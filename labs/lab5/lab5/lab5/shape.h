#include "point.h"

#ifndef SHAPE_H
#define SHAPE_H
class Shape {
protected:
	Point p;
	char* shapeName;

public:
	Shape(double x, double y, char* s);
	// PROMISES: shape initializes Point and label
	//			 using the given input

	Shape(const Shape& shapeSource);
	// PROMISES: safe copy for Shape

	Shape& operator = (Shape& shapeSource);
	// PROMISES: safe copy for Shape
	//			 and destroys memory allocated string

	virtual ~Shape();
	// PROMISES: destroys Shape object

	Point getOrigion() const;
	// PROMISES: returns Point object

	char* getName() const;
	// PROMISES: returns shape name

	void display();
	// PROMISES: displays name, x, and y coordinate

	double distance(Shape& s);
	// PROMISES: distance between two shapes
	
	static double distance(Shape& s1, Shape& s2);
	// PROMISES: distance between two shapes

	void move(double dx, double dy);
	// PROMISES: shifts Point x and y coordinates

};
#endif