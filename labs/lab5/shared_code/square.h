/*
 * square.h
 * Square header
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */


#include "shape.h"

#ifndef lab5_exe_A_Square
#define lab5_exe_A_Square

#include "shape.h"  // The Square class extends the Shape class

class Square : virtual public Shape {
public:
    Square(double x, double y, double side, const char* name);
    // Constructor with parameters to initialize the Square with specific coordinates, side length, and name.
    // PROMISES: Creates a Square object with the given x, y coordinates, side length, and name.
    // REQUIRES: "name" points to a null-terminated string.

    Square(const Square& other);
    // Copy constructor for the Square class.
    // PROMISES: Creates a new Square object that's a copy of the provided Square.
    // REQUIRES: "other" is a valid Square object.

    Square& operator=(Square& other);
    // Overloaded assignment operator for the Square class.
    // PROMISES: Assigns the content of "other" to the current Square object, avoids self-assignment.
    // REQUIRES: "other" is a valid Square object.

    ~Square();
    // Destructor for the Square class.
    // PROMISES: Destroys the Square object, freeing any allocated resources.

    double get_side_a() const;
    // Getter method for the side length of the Square.
    // PROMISES: Returns the length of side_a of the Square.

    void set_side_a(double arg);
    // Setter method for the side length of the Square.
    // PROMISES: Sets the length of side_a of the Square to "arg".
    // REQUIRES: "arg" is a non-negative value.

    double area() const;
    // Method to calculate the area of the Square.
    // PROMISES: Returns the area of the Square calculated as side_a * side_a.

    double perimeter() const;
    // Method to calculate the perimeter of the Square.
    // PROMISES: Returns the perimeter of the Square calculated as 4 * side_a.

    void display() const override;
    // Method to display the details of the Square.
    // PROMISES: Prints the name, origin, side length, area, and perimeter of the Square to the standard output.

private:
    double side_a;  // The length of the side of the Square
};

#endif