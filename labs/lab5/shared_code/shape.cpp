// shape.cpp
// ENSF 614 Fall 2023 LAB 5 - EXERCISE A
// Created By: Carissa Chung and Christian Valdez
// Submitted On: October 23, 2023

#include "shape.h"
#include "assert.h"

#include <iostream>
#include <cstring>
using namespace std;

// Shape constructor
Shape::Shape( Point p, const char* name ): origin( p ) {
    shapeName = new char[ strlen( name ) + 1 ];
    strcpy( shapeName, name );
}

// Copy constructor
Shape::Shape( const Shape& other ): origin( other.getOrigin() ) {
    shapeName = new char[ strlen( other.getName() ) + 1 ];
    assert( shapeName != NULL );
    strcpy( shapeName, other.getName() );
}

// Overloaded assignment operator
Shape& Shape::operator =( Shape& other ) {
    // Check if the current Shape is different from the input Shape, s
    if( this != &other ) {
        delete [] shapeName;
        origin = other.getOrigin();
        shapeName = new char[ strlen( other.getName() ) + 1 ];
        assert( shapeName != NULL );
        strcpy( shapeName, other.getName() );
    }
    return *this;
}

// Destructor for Shape
Shape::~Shape() {
    delete[] shapeName;
}

// Getter for origin
const Point& Shape::getOrigin() const {
    return origin;
}

char* Shape::getName() const {
    return shapeName;
}

void Shape::display() const {
    cout << "\nShape Name: " << shapeName;
    origin.display();
}

double Shape::distance( Shape& other) const {
    double dist;
    dist = origin.distance( other.getOrigin() );
    return dist;
}

double Shape::distance( Shape& the_shape, Shape& other ) {
    double dist;
    dist = the_shape.getOrigin().distance( the_shape.getOrigin(), other.getOrigin() );
    return dist;
}

void Shape::move( double dx, double dy ) {
    origin.set_x( origin.get_x() + dx );
    origin.set_y( origin.get_y() + dy );
}