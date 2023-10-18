/*
 * point.cpp
 * Implementation for Point class
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include <iostream>
#include "point.h"

using namespace std;

int Point::numOfPoints = 0;

Point::Point(double pX, double pY) : x(pX), y(pY){
	id = 1001 + numOfPoints;
	numOfPoints++;
}

Point::~Point() {
	numOfPoints--;
}

int Point::counter() const {
	return numOfPoints;
}

void Point::display() {
	cout << "X-coordinate: " << x <<
		"\nY-coordinate: " << y << endl;
}

