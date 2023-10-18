#include "point.h"

#ifndef SHAPE_H
#define SHAPE_H
class Shape {
protected:
	Point p;
	char* shapeName;

public:
	Shape(double x, double y, char* s);

};
#endif