#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstring>
#include "circle.h"

using namespace std;

Circle::Circle(double x, double y, double r, const char* s) : Shape(x, y, s), radius(r) { }

double Circle::getLength() const {
	return radius;
}

double Circle::area() {
	return M_PI * radius * radius;
}

double Circle::perimeter() {
	return 2 * M_PI * radius;
}

void Circle::display() {
	cout << "Circle Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() <<
		"\nY - coordinate " << getOrigin().getY() <<
		"\nradius : " << radius <<
		"\nArea: " << area() <<
		"\nPerimeter: " << perimeter() << endl << endl;
}