/*
 * curvecut.h
 * CurveCut header
 * Assignment: Lab 5 Exercise B
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include "Circle.h"
#include "Rectangle.h"

#ifndef lab5_exe_B_CurveCut
#define lab5_exe_B_CurveCut

class CurveCut : public Circle, public Rectangle {
public:
    CurveCut(double x, double y, double w, double l, double r, const char* name);
    // Constructor with parameters to initialize the CurveCut with specific coordinates, width, length, radius, and name.
    // PROMISES: Creates a CurveCut object with the given x, y coordinates, width, length, radius, and name.
    // REQUIRES: "name" points to a null-terminated string.

    CurveCut(const CurveCut& other);
    // Copy constructor for the CurveCut class.
    // PROMISES: Creates a new CurveCut object that's a copy of the provided CurveCut.
    // REQUIRES: "other" is a valid CurveCut object.

    CurveCut& operator=(CurveCut& other);
    // Overloaded assignment operator for the CurveCut class.
    // PROMISES: Assigns the content of "other" to the current CurveCut object, avoids self-assignment.
    // REQUIRES: "other" is a valid CurveCut object.

    ~CurveCut();
    // Destructor for the CurveCut class.
    // PROMISES: Destroys the CurveCut object, freeing any allocated resources.

    double area() const;
    // Method to calculate the area of the CurveCut.
    // PROMISES: Returns the area of the CurveCut, calculated as the area of the Rectangle minus the area of the quarter Circle.

    // Method to calculate the perimeter of the CurveCut.
    // PROMISES: Returns the perimeter of the CurveCut, calculated as the perimeter of the Rectangle plus the perimeter of the half Circle.
    double perimeter() const;

    void display() const override;
    // Method to display the details of the CurveCut.
    // PROMISES: Prints the name, coordinates, width, length, radius, area, and perimeter of the CurveCut to the standard output.

private:
    // Private members, if any, should be listed here. For example, you might have specific attributes unique to a CurveCut object.
};
#endif