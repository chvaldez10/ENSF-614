// point.cpp
// ENSF 614 Fall 2023 LAB 5 - EXERCISE A
// Created By: Carissa Chung and Christian Valdez
// Submitted On: October 23, 2023

#include "point.h"
#include <cmath>

#include <iostream>
using namespace std;

int Point::id_tracker = 1001;

// Point constructor
Point::Point( double x, double y ) : x( x ), y( y ), id( id_tracker ) {
    id_tracker++;
}

// Copy constructor
Point::Point( const Point& other ): x( other.get_x() ), y( other.get_y() ) {}

// Overloaded assignment operator
Point& Point::operator =( const Point& other ) {
    if( this != &other ) {
        x = other.get_x();
        y = other.get_y();
        id = other.get_id();
    }
    return *this;
}

// Destructor for Point
Point::~Point() {}

// Getter for x-coordinate
double Point::get_x() const {
    return x;
}

// Getter for y-coordinate
double Point::get_y() const {
    return y;
}

// Getter for id
int Point::get_id() const {
    return id;
}

// Setter for x-coordinate
void Point::set_x( double arg ) {
    x = arg;
}

// Setter for y-coordinate
void Point::set_y( double arg ) {
    y = arg;
}

// Determines number of Points at any time
int Point::counter() {
    int count;
    count = id_tracker - 1001;
    return count;
}

// Determines distance between two points
double Point::distance( Point p ) const {
    double dist;
    dist = sqrt( pow( ( p.get_x() - x ), 2) + pow( ( p.get_y() - y ), 2 ) );
    return dist;
}

// Determines distance between two points
double Point::distance( Point a, Point b ) {
    double dist;
    dist = sqrt( pow( ( b.get_x() - a.get_x() ), 2) + pow( ( b.get_y() - a.get_y() ), 2 ) );
    return dist;
}

void Point::display() const {
    cout << "\nX-coordinate: " << x;
    cout << "\nY-coordinate: " << y;
}