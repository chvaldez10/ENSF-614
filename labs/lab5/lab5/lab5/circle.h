#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : virtual public Shape {
protected:
	double radius;

	double getLength() const;
	// PROMISES: returns Circle length

public:
	Circle(double x, double y, double r, const char* s);
	// REQUIRES: 
	// r should be a non-negative value within the valid range of double, representing the radius of the Circle.
	// s should be a valid pointer to a null-terminated string, representing the name of the Circle.
	// PROMISES: Initializes a Circle object with position (x, y), radius r, and name provided by 's'.

	Circle(const Circle& circleSource);
	// REQUIRES: circleSource must be a valid, initialized Circle object.
	// PROMISES: Creates a new Circle object with the same properties as rectangleSource. Performs a deep copy if there are resources that require it.

	Circle& operator=(const Circle& circleSource);
	// REQUIRES: circleSource must be a valid, initialized Circle object.
	// PROMISES: Creates a new Circle object with the same properties as rectangleSource. Performs a deep copy if there are resources that require it.


	virtual ~Circle();
	// PROMISES: Destroys the Circle object and releases any resources it has acquired.

	void display();
	// REQUIRES: Circle object must be initialized.
	// PROMISES: Displays the name, x and y coordinates, and radius of the Circle in a human-readable format.

	double area();
	// REQUIRES: Circle object must be initialized.
	// PROMISES: Calculates and returns the area of the Circle.

	double perimeter();
	// REQUIRES: Circle object must be initialized.
	// PROMISES: Calculates and returns the perimeter (circumference) of the Circle.
};
#endif