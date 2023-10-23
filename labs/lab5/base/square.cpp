/*
 * square.cpp
 * Square class
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include "square.h"

#include <iostream>
#include <cstring>
using namespace std;

// Square constructor
Square::Square( double x, double y, double side, const char* name ): Shape( Point( x, y ), name ), side_a( side ) {}

// Copy constructor
Square::Square( const Square& other ): Shape( other ) {
    side_a = other.get_side_a();
}

// Overloaded assignment operator
Square& Square::operator =( Square& other ) {
    // Check if the current Circle is different from the input Circle, other
    if( this != &other ) {
        // Call the base class's assignment operator
        Shape::operator=(other);

        // Perform Circle-specific assignments
        side_a = other.get_side_a();
    }
    return *this;
}

// Destructor for Square
Square::~Square() {}

// Getter for side_a
double Square::get_side_a() const {
    return side_a;
}

// Setter for side_a
void Square::set_side_a( double arg ) {
    side_a = arg;
}

// Calculates the area of a Square
double Square::area() const {
    return side_a * side_a;
}

// Calculates the perimeter of a Square
double Square::perimeter() const {
    return 4 * side_a;
}

// Displays the details of a Square
void Square::display() const {
    cout << "\nSquare Name: " << this->getName();
    this->getOrigin().display();
    cout << "\nSide a: " << side_a;
    cout << "\nArea: " << this->area();
    cout << "\nPerimeter: " << this->perimeter();
}