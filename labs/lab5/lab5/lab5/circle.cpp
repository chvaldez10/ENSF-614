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

double Circle::getArea() {
	return M_PI * radius * radius;
}

double Circle::getPerimeter() {
	return 2 * M_PI * radius;
}

void Circle::display() {
	cout << "Rectange Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() <<
		"\nY - coordinate " << getOrigin().getY() <<
		"\nradius : " << radius <<
		"\nArea: " << getArea() <<
		"\nPerimeter: " << getPerimeter() << endl << endl;
}