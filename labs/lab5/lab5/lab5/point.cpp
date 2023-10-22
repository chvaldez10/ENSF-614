/*
 * point.cpp
 * Implementation for Point class
 * Assignment: Lab 5 Exercise A
 * Section: B01
 * Completed by: Carissa Chung and Christian Valdez
 * Submission date: October 23, 2023
 */

#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

int Point::numOfPoints = 0;
const int idStart = 1001;

Point::Point(double pX, double pY) : x(pX), y(pY), id(idStart+numOfPoints){
	numOfPoints++;
}

Point& Point::operator=(const Point& pointSource) {
	if (this == &pointSource) {
		return *this;
	}
	x = pointSource.x;
	y = pointSource.y;
	// should id be copied ? I think the id value should retain
	//id = pointSource.id; 

	return *this; // Return a reference to the current instance
}


Point::Point(const Point& pointSource) : x(pointSource.x), y(pointSource.y) {
	numOfPoints++;
	id = idStart + numOfPoints;
}

Point::~Point() {
	numOfPoints--;
}

void Point::setx(double x) {
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

double Point::distance(const Point& p) const {
	double deltaX = p.getX() - this->x;
	double deltaY = p.getY() - this->y;
	return sqrt(deltaX * deltaX + deltaY * deltaY);
}

double Point::distance(const Point& p1, const Point& p2) {
	double deltaX = p1.getX() - p2.getX();
	double deltaY = p1.getY() - p2.getY();
	return sqrt(deltaX * deltaX + deltaY * deltaY);
}