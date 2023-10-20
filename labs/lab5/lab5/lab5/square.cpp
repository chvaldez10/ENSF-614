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

double Square::getPerimeter() const {
	return 4 * side_a;
}

void Square::display() {
	cout << "X - coordinate: " << getOrigin().getX() << 
		"Y - coordinate" << getOrigin().getY() <<
		"Side a : " << side_a <<
		"Area: " << getArea() <<
		"Perimeter" << getPerimeter() << endl;
}