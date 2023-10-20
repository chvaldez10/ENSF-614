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
	// PROMISES: Initializes point with x and y coordinates using the provided pX and pY values.

	Point(const Point& pointSource);
	// REQUIRES: pointSource must be a valid, initialized Point object.
	// PROMISES: Constructs a new Point, making a safe copy of pointSource.

	Point& operator = (const Point& pointSource);
	// REQUIRES: pointSource must be a valid, initialized Point object.
	// PROMISES: Safely copies the data from pointSource to this Point object.

	~Point();
	// PROMISES: Destroys the Point object and releases any resources.

	void setx(double x);
	// PROMISES: sets new values for x coordinate

	void setY(double y);
	// PROMISES: sets new values for x coordinate

	double getX() const;
	// PROMISES: returns x coordinate

	double getY() const;
	// PROMISES: returns y coordinate

	int getId() const;
	// PROMISES: returns point id

	int counter() const;
	// PROMISES: returns number of points

	void display();
	// PROMISE: displays x and y coordinates in the terminal

	double distance(const Point& p) const;
	// PROMISES: distance between obj and another point

	static double distance(const Point& p1, const Point& p2);
	// PROMISES: distance between 2 points

};

#endif