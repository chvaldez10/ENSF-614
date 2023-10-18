#include <iostream>
#include <cmath>
#include <cstring>
#include "shape.h"

using namespace std;

Shape::Shape(double x, double y, const char* s) : p(x, y) {
	int stringLength = strlen(s)+1;
	shapeName = new char[stringLength];
	strcpy_s(shapeName, stringLength, s);
}

//Shape::Shape& (const Shape& shapeSource) : p(shapeSource) {
//`	shapeName = new char[]
//}

Shape::~Shape() {
	delete[] shapeName;
}

const Point& Shape::getOrigin() const {
	return p;
}

const char* Shape::getName() const {
	return shapeName;
}

void Shape::display() {
	cout << "Shape name: " << shapeName <<
		"X-coordinate: " << p.getX() <<
		"Y-coordinate: " << p.getY() << endl;
}