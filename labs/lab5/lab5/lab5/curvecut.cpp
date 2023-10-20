#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstring>
#include "curvecut.h"

using namespace std;

CurveCut::CurveCut(double x, double y, double a, double b, double r, const char* s) : Shape(x, y, s), Circle(x, y, r, s), Rectangle(x, y, a, b, s) { }

double CurveCut::area() {
	return Rectangle::area() - 0.25 * Circle::area();
}

double CurveCut::perimeter() {
	return Rectangle::perimeter() - (2 * radius + Circle::perimeter()*0.25);
}

void CurveCut::display() {
	cout << "CurveCut Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() <<
		"\nY - coordinate " << getOrigin().getY() <<
		"\nRadius of the cut : " << radius << endl << endl;
}