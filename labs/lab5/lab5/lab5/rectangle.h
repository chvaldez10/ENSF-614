#include "square.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Square {
protected:
	double side_b;

public:
	Rectangle(double x, double y, double sideA, double sideB, const char* s);
	// PROMISES: initializes Rectangle object

	void set_side_b(double num);
	// PROMISES: change length of side_b

	void set_side_a(double num);
	// PROMISES: change length of side_a

	void display();
	// PROMISES: displays name, x, and y coordinate, side length

	double area();
	// PROMISES: get Rectangle area

	double perimeter();
	// PROMISES: returns Rectangle perimiter

};
#endif