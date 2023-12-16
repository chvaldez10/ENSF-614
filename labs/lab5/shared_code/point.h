// point.h
// ENSF 614 Fall 2023 LAB 5 - EXERCISE A
// Created By: Carissa Chung and Christian Valdez
// Submitted On: October 23, 2023

#ifndef lab5_exe_A_Point
#define lab5_exe_A_Point

/* The following class definition represents a Point and contains four
 * private data members, a double x- and y-coordinate, an integer id and
 * an integer id_tracker that increments by one every time a new Point is 
 * created. 
 */
class Point {
public:
    Point( double x, double y );
    // PROMISES: initializes the x- and y-coordinates of a Point
    // with the input x and y

    Point( const Point& other );
    // PROMISES: copy constructor for Point. Copies other (Point object
    // to be copied).

    Point& operator =( const Point& other );
    // REQUIRES: current Point object can not be the same as other (input
    // Point object whose data is to be assigned to current object)
    // PROMISES: assigns data from Point object, other, to current Point
    // object.

    ~Point();
    // PROMISES: destructor for Point.  

    void display() const;
    // PROMISES: displays information about the Point.

    double get_x() const;
    // PROMISES: returns the x-coordinate of the Point.

    double get_y() const;
    // PROMISES: returns the y-coordinate of the Point.

    int get_id() const;
    // PROMISES: returns the id of the Point.

    void set_x( double arg );
    // PROMISES: sets the x-coordinate of the Point to arg.

    void set_y( double arg );
    // PROMISES: sets the y-coordinate of the Point to arg.

    int counter();
    // PROMISES: returns the number of Points at a current
    // time.

    double distance( Point p ) const;
    // PROMISES: calculates the distance between the current
    // Point and Point p.

    static double distance( Point a, Point b );
    // PROMISES: calculates the distance between two Points,
    // a and b.

private:
    double x;               // x-coordinate of a Point
    double y;               // y-coordinate of a Point
    int id;                 // unique id of a Point
    static int id_tracker;  // iterates every time a new Point is created
};

#endif