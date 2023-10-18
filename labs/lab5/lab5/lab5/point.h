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

	int counter() const;
	// PROMISES: returns number of points

	void display();
	// PROMISES: displays x and y coordinates for point

};

#endif