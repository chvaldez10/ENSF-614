#include <iostream>
#include <cmath>
#include <cstring>
#include "shape.h"

using namespace std;

Shape::Shape(double x, double y, const char* s) : origin(x, y) {
	int stringLength = strlen(s)+1;
	shapeName = new char[stringLength];
	strcpy_s(shapeName, stringLength, s);
}

Shape::Shape(const Shape& shapeSource) : origin(shapeSource.getOrigin()) {
	int shapeNameLength = strlen(shapeSource.getName())+1;
	shapeName = new char[shapeNameLength];
	strcpy_s(shapeName, shapeNameLength, shapeSource.getName());

}

Shape& Shape::operator=(Shape& shapeSource) {
	if (this != &shapeSource) {
		delete[] shapeName;
		origin.setX(shapeSource.getOrigin().getX());
		origin.setY(shapeSource.getOrigin().getY());
		int shapeNameLength = strlen(shapeSource.getName()) + 1;
		shapeName = new char[shapeNameLength];
		strcpy_s(shapeName, shapeNameLength, shapeSource.getName());
	}
	return *this;
}

Shape::~Shape() {
	delete[] shapeName;
	shapeName = nullptr;
}

const Point& Shape::getOrigin() const {
	return origin;
}

const char* Shape::getName() const {
	return shapeName;
}

void Shape::display() {
	cout << "Shape name: " << shapeName <<
		"X-coordinate: " << origin.getX() <<
		"Y-coordinate: " << origin.getY() << endl;
}