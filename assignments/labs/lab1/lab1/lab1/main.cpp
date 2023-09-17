/*
 *  Filename: lab1exe_B.cpp
 *  Assignment: Lab 1 Exercise B
 *  Section: B01
 *  Completed by: Christian Valdez
 *  Submission date: Sep 20, 2023
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double G = 9.8;   /* Gravitational acceleration 9.8 m/s^2 */
const double PI = 3.141592654;
const int MAX_ANGLE_DEG = 95; // Maximum angle in degrees to be used in the table

/**
 * Create a table displaying the time and distance traveled by a projectile
 * at varying angles for a given velocity.
 *
 * @param v - Initial velocity of the projectile.
 */
void create_table(double v);

/**
 * Calculate the time of flight for a projectile.
 *
 * @param a - Gravitational acceleration.
 * @param v - Initial velocity of the projectile.
 * @return Time in seconds the projectile remains in the air.
 */
double Projectile_travel_time(double a, double v);

/**
 * Calculate the horizontal distance traveled by a projectile.
 *
 * @param a - Gravitational acceleration.
 * @param v - Initial velocity of the projectile.
 * @return Distance in meters the projectile covers horizontally.
 */
double Projectile_travel_distance(double a, double v);

/**
 * Convert a given angle from degrees to radians.
 *
 * @param d - Angle in degrees.
 * @return Equivalent angle in radians.
 */
double degree_to_radian(double d);

double angleDeg = 0;  // Angle in degrees for the projectile
double angleRad;      // Angle in radians for the projectile

int main(void) {
    double velocity;

    // Prompt user for projectile velocity
    cout << "Please enter the velocity at which the projectile is launched (m/sec): ";
    cin >> velocity;

    // Check for valid input
    if (!cin) {
        cout << "Invalid input. Bye...\n";
        exit(1);
    }

    // Ensure the velocity is non-negative
    while (velocity < 0) {
        cout << "\nplease enter a positive number for velocity: ";
        cin >> velocity;
        if (!cin) {
            cout << "Invalid input. Bye...";
            exit(1);
        }
    }

    // Generate the table for projectile data
    create_table(velocity);
    return 0;
}

void create_table(double v) {
    double t, d; // time and distance

    // Table header
    cout << "Angle" << "\t\t t" << "\t\t d" << endl;
    cout << " (deg)" << "\t\t (sec)" << "\t\t (m)" << endl;
    cout << fixed << setprecision(6);

    // Calculate and display data for each angle until MAX_ANGLE_DEG
    while (angleDeg < MAX_ANGLE_DEG) {
        angleRad = degree_to_radian(angleDeg);
        t = Projectile_travel_time(G, v);
        d = Projectile_travel_distance(G, v);

        cout << angleDeg << "\t " << t << "\t " << d << endl;
        angleDeg += 5;  // Increase angle by 5 degrees
    }
}

double degree_to_radian(double d) {
    return angleDeg * (PI / 180);
}

double Projectile_travel_time(double a, double v) {
    return (2 * v * sin(angleRad)) / a;
}

double Projectile_travel_distance(double a, double v) {
    return (v * v * sin(2 * angleRad)) / a;
}