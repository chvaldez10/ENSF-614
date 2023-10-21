/*
 * point.h
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */


#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H
class Square : virtual public Shape{
protected:
	double side_a;

	double getLength() const;
	// REQUIRES: Square object must be initialized.
	// PROMISES: Returns the length of a side of the Square.

public:
	Square(double x, double y, double length, const char* s);
	// REQUIRES: 
	// length should be a non-negative value within the valid range of double, representing the side length of the Square.
	// s should be a valid pointer to a null-terminated string, representing the name of the Square.
	// PROMISES: Initializes a Square object with position (x, y), side length, and name provided by 's'.

	double perimeter();
	// REQUIRES: Square object must be initialized.
	// PROMISES: Calculates and returns the perimeter of the Square.

	double area();
	// REQUIRES: Square object must be initialized.
	// PROMISES: Calculates and returns the area of the Square.

	void display();
	// REQUIRES: Square object must be initialized.
	// PROMISES: Displays the name, x and y coordinates, side length, area, and perimeter of the Square.
};
#endif