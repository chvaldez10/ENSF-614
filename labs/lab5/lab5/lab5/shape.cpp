#include <iostream>
#include <cmath>
#include "shape.h"

Shape::Shape(double x, double y, const char* s) : p(x, y) {
	shapeName = s;
}