#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : virtual public Shape {
protected:
	double radius;

	double getArea();
	// PROMISES: get Circle area

	double getLength() const;
	// PROMISES: returns Circle length

	double getPerimeter();
	// PROMISES: returns Circle perimiter

public:
	Circle(double x, double y, double length, const char* s);
	// PROMISES: initializes Circle object

	void display();
	// PROMISES: displays name, x, and y coordinate, side length
};
#endif