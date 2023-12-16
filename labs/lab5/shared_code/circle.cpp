/*
 * circle.cpp
 * Circle class
 * Assignment: Lab 5 Exercise B
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include "circle.h"

#include <iostream>
#include <cmath>
using namespace std;

// Circle constructor
Circle::Circle( double x, double y, double r, const char* name ): Shape( Point( x, y ), name), radius(r) {}

// Copy constructor
Circle::Circle( const Circle& other ): Shape( other ) {
    radius = other.get_radius();
}

// Overloaded assignment operator
Circle& Circle::operator =( Circle& other ) {
    // Check if the current Circle is different from the input Circle, other
    if( this != &other ) {
        // Call the base class's assignment operator
        Shape::operator=(other);

        // Perform Circle-specific assignments
        radius = other.get_radius();
    }
    return *this;
}

// Destructor for Circle
Circle::~Circle() {}

// Getter for radius
double Circle::get_radius() const {
    return radius;
}

// Setter for radius
void Circle::set_radius( double arg ) {
    radius = arg;
}

// Calculates the area of a Circle
double Circle::area() const {
    double area;
    area = M_PI * pow( radius, 2 );
    return area;
}

// Calculates the perimeter of a Circle
double Circle::perimeter() const {
    double perimeter;
    perimeter = 2 * M_PI * radius;
    return perimeter;
}

// Displays the details of a Circle
void Circle::display() const {
    cout << "\nCircle Name: " << this->getName();
    this->getOrigin().display();
    cout << "\nRadius: " << radius;
    cout << "\nArea: " << this->area();
    cout << "\nPerimeter: " << this->perimeter();
}