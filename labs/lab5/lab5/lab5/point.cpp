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

Point::Point(double pX, double pY) : x(pX), y(pY){
	id = idStart + numOfPoints;
	numOfPoints++;
}

Point& Point::operator=(Point& pointSource) {
	if (this != &pointSource) {
		this->x = pointSource.getX();
		this->y = pointSource.getX();
		this->id = ++numOfPoints + idStart;
	}

	return *this;
}

Point::Point(const Point& pointSource) : x(pointSource.getX()),
	y(pointSource.getY()) {
	
	this->id = ++numOfPoints + idStart;
	
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

double Point::distance(Point& p) {
	double deltaX = fabs(p.getX() - this->x);
	double deltaY = fabs(p.getY() - this->y);
	return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}

double Point::distance(Point& p1, Point& p2) {
	double deltaX = fabs(p1.getX() - p2.getX());
	double deltaY = fabs(p1.getY() - p2.getY());
	return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}