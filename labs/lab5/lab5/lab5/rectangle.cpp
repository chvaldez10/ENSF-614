#include <iostream>
#include <cmath>
#include <cstring>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, double sideA, double sideB, const char* s)
	: Shape(x, y, s),  // explicitly call Shape's constructor
	Square(x, y, sideA, s),  // call Square's constructor
	side_b(sideB) {
	if (sideA < 0 || sideB < 0) {
		cerr << "Side lengths must be non-negative. Negative values have been adjusted to zero." << endl;
		if (sideA < 0) {
			set_side_a(0); // Using Square's method to ensure consistency.
		}
		if (sideB < 0) {
			this->side_b = 0;
		}
	}
}

double Rectangle::area() {
	return side_b * side_a;
}

void Rectangle::set_side_b(double num) { 
	// REQUIRES: num should be non-negative.
	if (num < 0) {
		cerr << "Side length must be non-negative. Setting to zero instead." << endl;
		side_b = 0;
	}
	else {
		side_b = num;
	}
}

void Rectangle::set_side_a(double num) {
	// REQUIRES: num should be non-negative.
	if (num < 0) {
		cerr << "Side length must be non-negative. Setting to zero instead." << endl;
		set_side_a(0); // Using Square's method to ensure consistency.
	}
	else {
		set_side_a(num); // Using Square's method to ensure consistency.
	}
}

double Rectangle::perimeter() {
	return 2 * (side_a + side_b);
}

void Rectangle::display() {
	cout << "Rectange Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() <<
		"\nY - coordinate " << getOrigin().getY() <<
		"\nSide a : " << side_a <<
		"\nSide b : " << side_b <<
		"\nArea: " << area() <<
		"\nPerimeter: " << perimeter() << endl << endl;
}