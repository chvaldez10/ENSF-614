#include "circle.h"
#include "rectangle.h"

#ifndef CURVECUT_H
#define CURVECUT_H
class CurveCut : public Circle, public Rectangle {
public:
	CurveCut(double x, double y, double a, double b, double r, const char* s);
	// REQUIRES: 
	// a and b represent the sides of the Rectangle part and must be non-negative values within the valid range for doubles.
	// r represents the radius of the Circular part and must be a non-negative value within the valid range for doubles.
	// a and b should be greater than r (to form a valid CurveCut shape, the circle's diameter should be less than the Rectangle's sides).
	// s should be a valid pointer to a null-terminated string, representing the name of the CurveCut.
	// PROMISES: Initializes a CurveCut object with position (x, y), Rectangle sides (a, b), Circle radius r, and name provided by 's'.

	CurveCut(const CurveCut& cutSource);
	// REQUIRES: cutSource must be a valid, initialized CurveCut object.
	// PROMISES: Creates a new CurveCut object with the same properties as CurveCutSource. Performs a deep copy if there are resources that require it.

	CurveCut& operator=(const CurveCut& cutSource);
	// REQUIRES: cutSource must be a valid, initialized CurveCut object.
	// PROMISES: Creates a new CurveCut object with the same properties as CurveCutSource. Performs a deep copy if there are resources that require it.

	virtual ~CurveCut();
	// PROMISES: Destroys the CurveCut object and releases any resources it has acquired.

	double area();
	// REQUIRES: CurveCut object must be initialized.
	// PROMISES: Calculates and returns the area of the CurveCut, which is the area of the Rectangle minus the area of the quarter Circle.

	double perimeter();
	// REQUIRES: CurveCut object must be initialized.
	// PROMISES: Calculates and returns the perimeter of the CurveCut, which is the perimeter of the Rectangle plus the circumference of the half Circle.

	void display();
	// REQUIRES: CurveCut object must be initialized.
	// PROMISES: Displays the name, x and y coordinates, Rectangle sides, and Circle radius.
};
#endif