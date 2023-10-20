#include <iostream>
#include <cmath>
#include <cstring>
#include "square.h"

using namespace std;

Square::Square(double x, double y, double length, const  char* s) : Shape(x, y, s), side_a(length) { }

double Square::getArea() {
	return side_a * side_a;
}

double Square::getLength() const {
	return side_a;
}

double Square::getPerimeter() {
	return 4 * side_a;
}

void Square::display() {
	cout << "Square Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() << 
		"\nY - coordinate " << getOrigin().getY() <<
		"\nSide a : " << side_a <<
		"\nArea: " << getArea() <<
		"\nPerimeter: " << getPerimeter() << endl;
}