#include <vector>
#include <string>
#include <iostream>
#include <assert.h> 

using namespace std;

#include "point.h"

int main() {
	// for testing only
	Point p(1, 2);
	Point p2(3, 4);

	// testing display
	p.display();

	// testing counter, expecting 2
	cout << "p2 counter = " << p2.counter() << endl;

	return 0;
}