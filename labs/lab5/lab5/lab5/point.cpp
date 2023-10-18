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

void Point::setX(double x) {
	this->x = x;
}

void Point::setY(double y) {
	this->y = y;
}

double Point::getX() const {
	return x;
}

double Point::getY() const {
	return y;
}

int Point::getId() const {
	return id;
}

int Point::counter() const {
	return numOfPoints;
}

void Point::display() {
	cout << "X-coordinate: " << x <<
		"\nY-coordinate: " << y << endl;
}

