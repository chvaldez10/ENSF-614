#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <cstring>
#include "curvecut.h"

using namespace std;

CurveCut::CurveCut(double x, double y, double a, double b, double r, const char* s) : Shape(x, y, s), Circle(x, y, r, s), Rectangle(x, y, a, b, s) { }

double CurveCut::getArea() {
	return Rectangle::getArea() - 0.25 * Circle::area();
}

double CurveCut::getPerimeter() {
	return Rectangle::getPerimeter() - (2 * radius + Circle::perimeter()*0.25);
}

//CurveCut Name :
//X - coordinate :
//	Y - coordinate :
//	Width :
//	Length :
//	Radius of the cut

void CurveCut::display() {
	cout << "CurveCut Name: " << shapeName <<
		"\nX - coordinate: " << getOrigin().getX() <<
		"\nY - coordinate " << getOrigin().getY() <<
		"\nRadius of the cut : " << radius << endl << endl;
}