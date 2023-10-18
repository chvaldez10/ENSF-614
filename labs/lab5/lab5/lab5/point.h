/*
 * point.h
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */


#ifndef POINT_H
#define POINT_H

class Point {
private:
	double x;
	double y;
	int id;
	static int numOfPoints;

public:
	Point(double pX, double pY);
	// PROMISES: point initializes point x and y coordinates 
	//			 using the given input

	~Point();
	// PROMISES: destroys point object

	double getX() const;
	// PROMISES: returns x coordinate

	double getY() const;
	// PROMISES: returns y coordinate

	int getId() const;
	// PROMISES: returns point id

	int counter() const;
	// PROMISES: returns number of points

	void display();
	// PROMISES: displays x and y coordinates for point

};

#endif