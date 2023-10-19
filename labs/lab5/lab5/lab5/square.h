#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H
class Square : public Shape{
protected:
	double side_a;

private:
	Square(double x, double y, double length, const char* s);
	double getArea();
	double getLength() const; 
	double getPerimeter() const;
	void display();
};
#endif