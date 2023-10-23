// shape.h
// ENSF 614 Fall 2023 LAB 5 - EXERCISE A
// Created By: Carissa Chung and Christian Valdez
// Submitted On: October 23, 2023

#include "point.h"

#ifndef lab5_exe_A_Shape
#define lab5_exe_A_Shape

/* The following class definition represents a Shape and contains two
 * private data members, a Point object called origin and a char pointer
 * that points to a dynamically allocated memory space called shapeName. 
 */
class Shape {
public:
    Shape( Point p, const char* name );
    // PROMISES: initializes the origin and shapeName of a Shape
    // with the input p (Point object representing the origin) and 
    // name (char pointer containing the name of the Shape).

    Shape( const Shape& other );
    // PROMISES: copy constructor for Shape. Copies other (Shape object
    // to be copied).

    Shape& operator =( Shape& other );
    // REQUIRES: current Shape object can not be the same as other (input
    // Shape object whose data is to be assigned to current object)
    // PROMISES: assigns data from Shape object, other, to current Shape
    // object.

    virtual ~Shape();
    // PROMISES: destructor for Shape.

    const Point& getOrigin() const;
    // PROMISES: returns a constant reference to the origin of the Shape

    char* getName() const;
    // PROMISES: returns a char pointer to the name of the Shape

    virtual void display() const;
    // PROMISES: virtual function to display information about the Shape.
    // Specific implementations are provided in derived classes.

    double distance( Shape& other) const;
    // PROMISES: calculates and returns the distance between the current Shape
    // and another Shape, other.

    static double distance( Shape& the_shape, Shape& other );
    // PROMISES: static function to calculate the distance between two Shape objects,
    // the_shape and other.

    void move( double dx, double dy );
    // PROMISES: changes the position of the current Shape object. Adds dx (amount to 
    // move along the x-axis) to the current x-coordinate and dy (amount to move along 
    // the y-axis) to the y-coordinate.

    virtual double area() const = 0;
    // PROMISES: pure virtual function to calculate and return the area of the Shape.
    // Implemented in derived classes.

    virtual double perimeter() const = 0;
    // PROMISES: pure virtual function to calculate and return the perimeter of the Shape.
    // Implemented in derived classes.

private:
    Point origin;       // The origin point of the Shape.
    char* shapeName;    // A char pointer to the name of the Shape.
};

#endif