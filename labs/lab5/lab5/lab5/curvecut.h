#include "circle.h"
#include "rectangle.h"

#ifndef CURVECUT_H
#define CURVECUT_H
class CurveCut : public Circle, public Rectangle {
public:
	CurveCut(double x, double y, double a, double b, double r, const char* s);
	// PROMISES: initializes CurveCut object

	double area();
	// PROMISES: get CurveCut area

	double perimeter();
	// PROMISES: returns CurveCut perimiter

	void display();
	// PROMISES: displays name, x, and y coordinate, side length
};
#endif