/*
 *  lab2exe_D.cpp
 *  ENSF 614 Lab 2 Exercise D
 */

#include <iostream>
#include <cstring>
using namespace std;

struct Course {
	char dept[5];
	int number;
};

struct Course func1(void);

int main(void) {
	Course alpha = { "ENGG", 213 };
	Course beta = { "PHYS", 259 };
	Course* psc;
	int* pi;

	cout << "A pointer to int occupies " << sizeof(pi) << " bytes.\n";
	cout << "A struct course occupies " << sizeof(alpha) << " bytes.\n";
	cout << "A pointer to struct course occupies " << sizeof(psc) << " bytes.\n";

	pi = &(alpha.number);
	*pi = 233;
	psc = &beta;
	psc->number = 269;

	alpha = func1();
	cout << "The values in struct alpha are: " << alpha.dept << " and " << alpha.number << "\n";
	cout << "The values in struct beta are: " << beta.dept << " and " << beta.number << "\n";
	return 0;
}

struct Course func1(void)
{
	struct Course result;

	strcpy_s(result.dept, "ENCM");
	result.number = 339;
	return result;
}
