#include <iostream>
#include <cmath>
#include <cstring>
#include "square.h"

using namespace std;

Square::Square(double x, double y, double length, const char* s) : Shape(x, y, s) {
	if (length <= 0) {
		throw std::invalid_argument("Side length must be positive.");
	}
	side_a = length;
}


double Square::area() {
	return side_a * side_a;
}

double Square::getLength() const {
	return side_a;
}

double Square::perimeter() {
	return 4 * side_a;
}

void Square::display() {
	cout << "Square Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() << 
		"\nY - coordinate " << getOrigin().getY() <<
		"\nSide a : " << side_a <<
		"\nArea: " << area() <<
		"\nPerimeter: " << perimeter() << endl;
}