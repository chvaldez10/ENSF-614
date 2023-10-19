#include "GraphicsWorld.h"
#include <iostream>
#include "Point.h"
#include "Shape.h"
#include "Square.h"
//#include "Rectangle.h"

using namespace std;

void GraphicsWorld::run() {
#if 0
	Point m(6, 8);
	Point n(6, 8);
	n.setX(9);
	cout << "\nExpected to display the distance between m and n is: 3";
	cout << "\nThe distance between m and n is: " << m.distance(n);
	cout << "\nExpected second version of the distance function also prints: 3";
	cout << "\nThe distance between m and n is again: " << Point::distance(m, n);
#endif 

//#if 0
//	Shape shape1(6, 8, "shape1");
//	Shape shape2(9, 8, "shape2");
//	shape1.move(6, 9);
//	cout << "testing move," << endl;
//	shape1.display();
//
//#endif

//#if 1
//	cout << "\n\nTesting Functions in class Square:" << endl;
//	Square s(5, 7, 12, "SQUARE - S");
//	s.display();
//#endif

#if 0 // Change 0 to 1 to test Rectangle
// Assuming the existence of Rectangle class and its methods
// Code block for testing Rectangle goes here...
#endif // end of block to test Rectangle

#if 0 // Change 0 to 1 to test using array of pointers and polymorphism
// Assuming the existence of Shape class and its methods
// Code block for testing array of pointers and polymorphism goes here...
#endif
}

