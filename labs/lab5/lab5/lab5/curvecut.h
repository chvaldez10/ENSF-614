#include "circle.h"
#include "rectangle.h"

#ifndef CURVECUT_H
#define CURVECUT_H
class CurveCut : public Circle, public Rectangle {
protected:
	double getArea();
	// PROMISES: get CurveCut area

	double getPerimeter();
	// PROMISES: returns CurveCut perimiter

public:
	CurveCut(double x, double y, double a, double b, double r, const char* s);
	// PROMISES: initializes CurveCut object

	void display();
	// PROMISES: displays name, x, and y coordinate, side length
};
#endif