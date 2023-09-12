#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cout << "Please enter a value for variable a:" << endl;
	cin >> a;

	cout << "Please enter a value for variable b:" << endl;
	cin >> b;

	cout << "The values of a and b are: " << a << " for a, and " << b << " for b." << endl;
	cout << "The value of " << a << " % " << b << " is " << a % b << endl;
	return 0;
}