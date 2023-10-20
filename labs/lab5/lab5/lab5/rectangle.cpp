#include <iostream>
#include <cmath>
#include <cstring>
#include "rectangle.h"

using namespace std;

//Rectangle::Rectangle(double x, double y, double sideA, double sideB, const char* s) : Square(x, y, sideA, s), side_b(sideB) { }

Rectangle::Rectangle(double x, double y, double sideA, double sideB, const char* s)
	: Shape(x, y, s),  // explicitly call Shape's constructor
	Square(x, y, sideA, s),  // call Square's constructor
	side_b(sideB)
{
	// constructor body
}

double Rectangle::getArea() {
	return side_b * side_a;
}

void Rectangle::set_side_b(double num) { 
	side_b = num;
}

void Rectangle::set_side_a(double num) {
	side_a = num;
}

double Rectangle::getPerimeter() {
	return 2 * (side_a + side_b);
}

void Rectangle::display() {
	cout << "Rectange Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() <<
		"\nY - coordinate " << getOrigin().getY() <<
		"\nSide a : " << side_a <<
		"\nSide b : " << side_b <<
		"\nArea: " << getArea() <<
		"\nPerimeter: " << getPerimeter() << endl << endl;
}