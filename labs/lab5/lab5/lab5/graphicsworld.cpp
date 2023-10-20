#include "GraphicsWorld.h"
#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Square.h"
//#include "Rectangle.h"

using namespace std;

void GraphicsWorld::run() {
#if 0 // Change 0 to 1 to test Point
	Point m(6, 8);
	Point n(6, 8);
	n.setx(9);
	cout << "\nExpected to dispaly the distance between m and n is: 3";
	cout << "\nThe distance between m and n is: " << m.distance(n);
	cout << "\nExpected second version of the distance function also print: 3";
	cout << "\nThe distance between m and n is again: "
		<< Point::distance(m, n);
#endif // end of block to test Point

#if 1 // Change 0 to 1 to test Square
	cout << "\n\nTesting Functions in class Square:" << endl;
	Square s(5, 7, 12, "SQUARE - S");
	s.display();
#endif

#if 0 // Change 0 to 1 to test Rectangle
// Assuming the existence of Rectangle class and its methods
// Code block for testing Rectangle goes here...
#endif // end of block to test Rectangle

#if 0 // Change 0 to 1 to test using array of pointers and polymorphism
// Assuming the existence of Shape class and its methods
// Code block for testing array of pointers and polymorphism goes here...
#endif
}

