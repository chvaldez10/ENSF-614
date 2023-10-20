#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H
class Square : public Shape{
protected:
	double side_a;

public:
	Square(double x, double y, double length, const char* s);
	// ORMISES: initializes square object

	double getArea();
	// PROMISES: get square area
	
	double getLength() const; 
	// PROMISES: returns square length

	double getPerimeter() const;
	// PROMISES: returns square perimiter

	void display();
	// PROMISES: displays name, x, and y coordinate, side length
};
#endif