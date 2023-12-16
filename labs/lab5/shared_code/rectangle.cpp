/*
 * rectangle.cpp
 * Rectangle class
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include "rectangle.h"

#include <iostream>
#include <cstring>
using namespace std;

// Rectangle constructor
Rectangle::Rectangle( double x, double y, double side_a, double side_b, const char* name ): Square( x, y, side_a, name ), side_b( side_b ), Shape( Point( x, y ), name ) {}

// Copy constructor
Rectangle::Rectangle( const Rectangle& other ): Square( other ), Shape( other ) {
    side_b = other.get_side_b();
}

// Overloaded assignment operator
Rectangle& Rectangle::operator =( Rectangle& other ) {
    // Check if the current Circle is different from the input Circle, other
    if( this != &other ) {
        // Call the base classes' assignment operator
        Shape::operator=(other);
        Square::operator=(other);

        // Perform Rectangle-specific assignments
        side_b = other.get_side_b();
    }
    return *this;
}

// Destructor for Rectangle
Rectangle::~Rectangle() {}

// Getter for side_b
double Rectangle::get_side_b() const {
    return side_b;
}

// Setter for side_b
void Rectangle::set_side_b( double arg ) {
    side_b = arg;
}

// Calculates the area of a Rectangle
double Rectangle::area() const {
    return this->get_side_a() * side_b;
}

// Calculates the perimeter of a Rectangle
double Rectangle::perimeter() const {
    return ( 2 * this->get_side_a() ) + ( 2 * side_b );
}

// Displays details of a Rectangle
void Rectangle::display() const {
    cout << "\nRectangle Name: " << this->getName();
    this->getOrigin().display();
    cout << "\nSide a: " << this->get_side_a();
    cout << "\nSide b: " << side_b;
    cout << "\nArea: " << this->area();
    cout << "\nPerimeter: " << this->perimeter();
}




