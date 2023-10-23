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
			set_side_a(0); 
		}

		if (sideB < 0) {
			side_b = 0;
		}
	}
}

Rectangle::Rectangle(const Rectangle& rectangleSource) : Shape(rectangleSource), Square(rectangleSource), side_b(rectangleSource.side_b) { }

Rectangle& Rectangle::operator=(const Rectangle& rectangleSource) {
	if (this != &rectangleSource) {
		Shape::operator=(rectangleSource);
		Square::operator=(rectangleSource);
		side_b = rectangleSource.side_b;
	}

	return *this;
}

Rectangle::~Rectangle() {}

double Rectangle::area() {
	return side_b * side_a;
}

void Rectangle::set_side_b(double num) { 
	if (num < 0) {
		cerr << "Side length must be non-negative. Setting to zero instead." << endl;
		side_b = 0;
	} else {
		side_b = num;
	}
}

void Rectangle::set_side_a(double num) {
	if (num < 0) {
		cerr << "Side length must be non-negative. Setting to zero instead." << endl;
		side_a = 0;
	}
	else {
		side_a = num;
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