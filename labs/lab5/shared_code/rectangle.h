/*
 * rectangle.h
 * Rectangle header
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include "Square.h"

#ifndef lab5_exe_A_Rectangle
#define lab5_exe_A_Rectangle

class Rectangle : public Square {
public:
    Rectangle(double x, double y, double side_a, double side_b, const char* name);
    // Constructor with parameters to initialize the Rectangle with specific coordinates, sides, and name.
    // PROMISES: Creates a Rectangle object with the given x, y coordinates, side_a, side_b, and name.
    // REQUIRES: "name" points to a null-terminated string.

    Rectangle(const Rectangle& other);
    // Copy constructor for the Rectangle class.
    // PROMISES: Creates a new Rectangle object that's a copy of the provided Rectangle.
    // REQUIRES: "other" is a valid Rectangle object.

    Rectangle& operator=(Rectangle& other);
    // Overloaded assignment operator for the Rectangle class.
    // PROMISES: Assigns the content of "other" to the current Rectangle object, avoids self-assignment.
    // REQUIRES: "other" is a valid Rectangle object.

    ~Rectangle();
    // Destructor for the Rectangle class.
    // PROMISES: Destroys the Rectangle object, freeing any allocated resources.

    double get_side_b() const;
    // Getter method for the side_b length of the Rectangle.
    // PROMISES: Returns the length of side_b of the Rectangle.

    void set_side_b(double arg);
    // Setter method for the side_b length of the Rectangle.
    // PROMISES: Sets the length of side_b of the Rectangle to "arg".
    // REQUIRES: "arg" is a non-negative value.

    double area() const override;
    // Method to calculate the area of the Rectangle.
    // PROMISES: Returns the area of the Rectangle calculated as side_a * side_b.

    double perimeter() const override;
    // Method to calculate the perimeter of the Rectangle.
    // PROMISES: Returns the perimeter of the Rectangle calculated as 2 * (side_a + side_b).

    void display() const override;
    // Method to display the details of the Rectangle.
    // PROMISES: Prints the name, origin, side lengths, area, and perimeter of the Rectangle to the standard output.

private:
    double side_b;  // The length of the side_b of the Rectangle
};

#endif