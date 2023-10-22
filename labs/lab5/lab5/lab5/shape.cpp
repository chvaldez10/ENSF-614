#include <iostream>
#include <cmath>
#include <cstring>
#include "shape.h"

using namespace std;

Shape::Shape(double x, double y, const char* s) : origin(x, y) {
	if (s == nullptr) {
		throw invalid_argument("Null pointer found for shape name");
	}

	size_t stringLength = strlen(s)+1;
	shapeName = new char[stringLength];
	strcpy_s(shapeName, stringLength, s); // strcpy_s doesnt work on the suggested Cygwin compiler
}

Shape::Shape(const Shape& shapeSource) : origin(shapeSource.getOrigin()) {
	const char* sourceName = shapeSource.getName();

	if (sourceName == nullptr) {
		throw invalid_argument("Null pointer found for shape name");
	}

	size_t shapeNameLength = strlen(sourceName)+1;
	shapeName = new char[shapeNameLength];
	strcpy_s(shapeName, shapeNameLength, sourceName);

}

Shape& Shape::operator=(Shape& shapeSource) {
	if (this != &shapeSource) {
		const char* sourceName = shapeSource.getName();

		if (sourceName == nullptr) {
			throw std::invalid_argument("Null pointer found for shape name");
		}

		size_t shapeNameLength = strlen(sourceName) + 1;
		char* newShapeName = new char[shapeNameLength]; 
		strcpy_s(newShapeName, shapeNameLength, sourceName);
		delete[] shapeName; 
		shapeName = newShapeName; 
		origin = shapeSource.getOrigin();
	}
	return *this;
}

Shape::~Shape() {
	delete[] shapeName;
}

const Point& Shape::getOrigin() const {
	return origin;
}

const char* Shape::getName() const {
	return shapeName;
}

void Shape::display() {
	cout << "Shape name: " << shapeName << "\n"
		<< "X-coordinate: " << origin.getX() << "\n"
		<< "Y-coordinate: " << origin.getY() << endl;
}

double Shape::distance(const Shape& s) {
	return origin.distance(s.getOrigin());
}

double Shape::distance(const Shape& s1, const Shape& s2) {
	return Point::distance(s1.getOrigin(), s2.getOrigin());
}

void Shape::move(double dx, double dy) {
	origin.setx(origin.getX() + dx);
	origin.setY(origin.getY() + dy);
}