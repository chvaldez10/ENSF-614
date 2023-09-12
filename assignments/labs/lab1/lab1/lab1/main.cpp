/*
 *  lab1exe_B.cpp
 *  ENSF 614 Lab 1, exercise B
 *  Created by Mahmood Moussavi
 *  Completed by: Christian Valdez
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

double angleDeg;
double angleRad;

int main(void) {
    double velocity;

    cout << "Please enter the velocity at which the projectile is launched (m/sec): ";
    cin >> velocity;

    if (!cin) {
        cout << "Invlid input. Bye...\n";
        exit(1);
    }

    while (velocity < 0) {
        cout << "\nplease enter a positive number for velocity: ";
        cin >> velocity;
        if (!cin) {
            cout << "Invlid input. Bye...";
            exit(1);
        }
    }

    create_table(velocity);
    return 0;
}

void create_table(double v) {
    angleDeg = 0;
    double t;
    double d;

    cout << "Angle (deg)" << "\t t (sec)" << "\t d (m)" << endl;
    cout << fixed << setprecision(6);

    while (angleDeg < 15) {
        angleRad = degree_to_radian(angleDeg);
        t = Projectile_travel_time(G, v);
        d = Projectile_travel_distance(G, v);

        cout << angleDeg << "\t " << t << "\t " << d << endl;
        angleDeg += 5;
    }
}

double degree_to_radian(double d) {
    return angleDeg * (PI/180);
}

double Projectile_travel_time(double a, double v) {
    return (2 * v * sin(angleRad)) / a;
}

double Projectile_travel_distance(double a, double v) {
    return (v * v * sin(2 * angleRad)) / a;
}