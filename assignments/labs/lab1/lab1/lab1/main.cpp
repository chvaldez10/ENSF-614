/*
* File Name: lab1exe_B.cpp
* Assignment: Lab 1 Exercise B
* Completed by: Redge Santillan
* Submission Date: Sept 20, 2023
*/
#include <iostream>
#include <cmath>
using namespace std;
const double G = 9.8; /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;
void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);
double Projectile_travel_velocity(double a);

int main(void) {
	double velocity;
	cout << "Please enter the velocity at which the projectile is (m / sec) : ";
		cin >> velocity;
	if (!cin) // means if cin failed to read
	{
		cout << "Invlid input. Bye...\n";
		exit(1);
	}
	while (velocity < 0)
	{
		cout << "\nplease enter a positive number for velocity: ";
		cin >> velocity;
		if (!cin)
		{
			cout << "Invlid input. Bye...";
			exit(1);
		}
	}
	create_table(velocity);
	return 0;
}
void create_table(double v) {
	cout << "Angle\t\tt\t\td\n";
	cout << " (deg)\t (sec)\t (m)\n";

	for (int i = 0; i <= 90; i += 5) {
		cout << i << "\t\t" << Projectile_travel_time(degree_to_radian(i),
			v) << "\t\t" << Projectile_travel_distance(degree_to_radian(i), v) << "\n";
	}
}
double Projectile_travel_time(double a, double v) {
	return (2 * v * (sin(a))) / (G);
}
double Projectile_travel_distance(double a, double v) {
	return (pow(v, 2) / G) * sin(2 * a);
}
double degree_to_radian(double d) {
	return d * (PI / 180);
}