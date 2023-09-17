/*
 *  Filename: lab1exe_E.cpp
 *  Assignment: Lab 1 rxercise E
 *  Section: B01
 *  Completed by: Christian Valdez
 *  Submission date: Sep 20, 2023
 */

#include <iostream>
using namespace std;

/**
 * Converts milliseconds to minutes and seconds.
 * @param ms_time - Time in milliseconds to convert.
 * @param minutes_ptr - Pointer to store the resulting minutes.
 * @param seconds_ptr - Pointer to store the resulting seconds.
 */
void time_convert(int ms_time, int* minutes_ptr, double* seconds_ptr);


 // Constants for time conversion
const int MS_PER_SECOND = 1000;
const int SECONDS_PER_MINUTE = 60;

int main(void) {
    int millisec;
    int minutes;
    double seconds;

    // Prompt the user to input time in milliseconds
    cout << "Enter a time interval as an integer number of milliseconds: ";
    cin >> millisec;

    // Check if input conversion to integer was successful
    if (!cin) {
        cout << "Unable to convert your input to an int.\n";
        exit(1);
    }

    // Check for non-negative time input
    if (millisec < 0) {
        cout << "Please enter a non-negative value.\n";
        exit(1);
    }

    // Convert the input milliseconds to minutes and seconds
    cout << "Doing conversion for input of " << millisec << " milliseconds ... \n", millisec;
    time_convert(millisec, &minutes, &seconds);
    cout << "That is equivalent to " << minutes << " minute(s) and " << seconds << " second(s).\n";
    return 0;
}

void convert_time(int ms_time, int* minutes_ptr, double* seconds_ptr) {
    // Calculate the number of whole minutes
    *minutes_ptr = ms_time / (MS_PER_SECOND * SECONDS_PER_MINUTE);
    // Calculate the remaining seconds
    *seconds_ptr = (double)(ms_time % (MS_PER_SECOND * SECONDS_PER_MINUTE)) / MS_PER_SECOND;
}