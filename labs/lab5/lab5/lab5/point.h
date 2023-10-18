#ifndef POINT_H
#define POINT_H

class Point {
private:
	double x;
	double y;
	int id;

public:
	void getX() const;

	void getY() const;

	void getId() const;

	void display();

};

#endif