#include "square.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Square {
protected:
	double side_b;

public:
	Rectangle(double x, double y, double sideA, double sideB, const char* s);
	// REQUIRES: 
	// sideA and sideB should be non-negative values within the valid range of double, representing the lengths of the Rectangle's sides.
	// s should be a valid pointer to a null-terminated string, representing the name of the Rectangle.
	// PROMISES: Initializes a Rectangle object with position (x, y), side lengths (sideA and sideB), and name provided by 's'.

	Rectangle(const Rectangle& rectangleSource);
	// REQUIRES: rectangleSource must be a valid, initialized Rectangle object.
	// PROMISES: Creates a new Rectangle object with the same properties as rectangleSource. Performs a deep copy if there are resources that require it.

	Rectangle& operator=(const Rectangle& rectangleSource);
	// REQUIRES: rectangleSource must be a valid, initialized Rectangle object.
	// PROMISES: Creates a new Rectangle object with the same properties as rectangleSource. Performs a deep copy if there are resources that require it.

	virtual ~Rectangle();
	// PROMISES: Destroys the Rectangle object and releases any resources it has acquired.

	void set_side_b(double num);
	// REQUIRES: num should be a non-negative value within the valid range of double.
	// PROMISES: Sets a new length for side_b of the Rectangle.

	void set_side_a(double num);
	// REQUIRES: num should be a non-negative value within the valid range of double.
	// PROMISES: Sets a new length for side_a of the Rectangle (inherited from Square).

	void display();
	// REQUIRES: Rectangle object must be initialized.
	// PROMISES: Displays the name, x and y coordinates, side length, area, and perimeter of the Rectangle.

	double area();
	// REQUIRES: Rectangle object must be initialized.
	// PROMISES: Calculates and returns the area of the Rectangle.

	double perimeter();
	// REQUIRES: Rectangle object must be initialized.
	// PROMISES: Calculates and returns the perimeter of the Rectangle.

};
#endif