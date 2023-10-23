/*
 * circle.h
 * Circle header
 * Assignment: Lab 5 Exercise B
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */


#include "Shape.h"

#ifndef lab5_exe_B_Circle
#define lab5_exe_B_Circle

class Circle: virtual public Shape {
    public:
        Circle( double x, double y, double r, const char* name );
		// Constructor with parameters to initialize the Circle with specific coordinates, radius, and name.
		// PROMISES: Creates a Circle object with the given x, y coordinates, radius, and name.
		// REQUIRES: "name" points to a null-terminated string.

		Circle( const Circle& other );
		// Copy constructor for the Circle class.
		// PROMISES: Creates a new Circle object that's a copy of the provided Circle.
		// REQUIRES: "other" is a valid Circle object.
		
		Circle& operator =( Circle& other );
		// Overloaded assignment operator for the Circle class.
		// PROMISES: Assigns the content of "other" to the current Circle object, avoids self-assignment.
		// REQUIRES: "other" is a valid Circle object.
		
		~Circle();
		// Destructor for the Circle class.
    	// PROMISES: Destroys the Circle object, freeing any allocated resources.
		
		double get_radius() const;
		// Getter method for the radius of the Circle.
    	// PROMISES: Returns the radius of the Circle.
		
		void set_radius( double arg );
		// Setter method for the radius of the Circle.
		// PROMISES: Sets the radius of the Circle to "arg".
		// REQUIRES: "arg" is a non-negative value.

		double area() const;
		// Method to calculate the area of the Circle.
    	// PROMISES: Returns the area of the Circle calculated as pi * radius^2.
		
		double perimeter() const;
		// Method to calculate the perimeter of the Circle.
    	// PROMISES: Returns the perimeter of the Circle calculated as 2 * pi * radius.
		
		void display() const override;
		// Method to display the details of the Circle.
    	// PROMISES: Prints the name, origin, radius, area, and perimeter of the Circle to the standard output.
    
	private:
        double radius;
};

#endif