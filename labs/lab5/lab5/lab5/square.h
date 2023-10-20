#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H
class Square : virtual public Shape{
protected:
	double side_a;

	double getLength() const;
	// PROMISES: returns square length

public:
	Square(double x, double y, double length, const char* s);
	// PROMISES: initializes square object

	double perimeter();
	// PROMISES: returns square perimiter

	double area();
	// PROMISES: get square area

	void display();
	// PROMISES: displays name, x, and y coordinate, side length
};
#endif