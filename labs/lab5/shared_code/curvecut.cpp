/*
 * curvecut.cpp
 * CurveCut class
 * Assignment: Lab 5 Exercise B
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include "curvecut.h"

#include <iostream>
using namespace std;

// CurveCut constructor
CurveCut::CurveCut( double x, double y, double w, double l, double r, const char* name ): Circle( x, y, r, name ), Rectangle( x, y, w, l, name ), Shape( Point( x, y), name ) {
    // Radius of the circle must be less than the smaller of either the width or length
    if ( r > min( w, l )) {
        cout << "The radius of the circle must be less than or equal to the smaller of width or length of the rectangle. Terminating program.";
        exit(1);
    }
}

// Copy constructor
CurveCut::CurveCut( const CurveCut& other ): Shape( other ), Circle( other ), Rectangle( other ) {}

// Overloaded assignment operator
CurveCut& CurveCut::operator =( CurveCut& other ) {
    // Check if the current Circle is different from the input Circle, other
    if( this != &other ) {
        // Call the base classes' assignment operator
        Shape::operator=( other );
        Circle::operator=( other );
        Rectangle::operator=( other );
    }
    return *this;
}

// Destructor for CurveCut
CurveCut::~CurveCut() {}

// Calculates the area of CurveCut
double CurveCut::area() const {
    // Calculate the area of the circle that overlaps the rectangle (quarter of the area of a circle)
    double circ_area = Circle::area() / 4;

    // Calculate the area of the rectangle
    double rect_area = Rectangle::area();

    // The area of the CurveCut is calculated by subtracting the quarter circle area from the rectangle area
    return rect_area - circ_area;
}

// Calulates the perimeter of CurveCut
double CurveCut::perimeter() const {
    // Calculate the perimeter of the curved part (quarter of a circle circumference)
    double circ_perimeter = Circle::perimeter() / 4;

    // Calculate the perimeter of the straight part (rectangle)
    double rect_perimeter = Rectangle::perimeter();

    // The perimeter of the CurveCut is the sum of a quarter of the circumference of a circle and rectangle perimeters minus double the radius
    return rect_perimeter - ( 2 * Circle::get_radius() ) + circ_perimeter;
}

// Displays the details of a CurveCut object
void CurveCut::display() const {
    cout << "\nCurveCut Name: " << this->getName();
    this->getOrigin().display();
    cout << "\nWidth: " << Rectangle::get_side_a();
    cout << "\nLength: " << Rectangle::get_side_b();
    cout << "\nRadius of the cut: " << Circle::get_radius();
}