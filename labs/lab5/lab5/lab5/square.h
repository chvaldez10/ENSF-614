#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H
class Square : virtual public Shape{
protected:
	double side_a;

	double getArea();
	// PROMISES: get square area

	double getLength() const;
	// PROMISES: returns square length

	double getPerimeter();
	// PROMISES: returns square perimiter

public:
	Square(double x, double y, double length, const char* s);
	// PROMISES: initializes square object

	void display();
	// PROMISES: displays name, x, and y coordinate, side length
};
#endif