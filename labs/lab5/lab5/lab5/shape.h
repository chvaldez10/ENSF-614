#include "point.h"

#ifndef SHAPE_H
#define SHAPE_H
class Shape {
protected:
	Point origin;
	char* shapeName;

public:
	Shape(double x, double y, const char* s);
	// PROMISES: shape initializes Point and label
	//			 using the given input

	Shape(const Shape& shapeSource);
	// PROMISES: safe copy for Shape

	Shape& operator=(Shape& shapeSource);
	// PROMISES: safe copy for Shape
	//			 and destroys memory allocated string

	virtual ~Shape();
	// PROMISES: destroys Shape object

	const Point& getOrigin() const;
	// PROMISES: returns Point object

	const char* getName() const;
	// PROMISES: returns shape name

	virtual void display();
	// PROMISES: displays name, x, and y coordinate

	virtual double distance(const Shape& s);
	// PROMISES: distance between two shapes
	
	static double distance(const Shape& s1, const Shape& s2);
	// PROMISES: distance between two shape

	void move(double dx, double dy);
	// PROMISES: shifts Point x and y coordinates

	virtual double area() = 0;
	// PROMISES: get area

	virtual double perimeter() = 0;
	// PROMISES: returns perimiter


};
#endif