#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : virtual public Shape {
protected:
	double radius;

	double getLength() const;
	// PROMISES: returns Circle length

public:
	Circle(double x, double y, double r, const char* s);
	// PROMISES: initializes Circle object

	void display();
	// PROMISES: displays name, x, and y coordinate, side length

	double area();
	// PROMISES: get Circle area

	double perimeter();
	// PROMISES: returns Circle perimiter
};
#endif