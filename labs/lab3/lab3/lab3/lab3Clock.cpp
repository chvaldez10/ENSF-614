//
//  lab3Clock.cpp
//  ENSF 614 - Lab 3 - Exercise C
//  Section B01
//  Completed by: Alton Wong and Christian Valdez
//  Submissino Date: October 13, 2023
//

#include "lab3Clock.h"
#include <iostream>
using namespace std;

int Clock::hms_to_sec(){
    return (hour * 3600) + (minute * 60) + second;
}

void Clock::sec_to_hms(int seconds_total){
    seconds_total %= 86400;  // Wrap around every 24 hours (24 * 60 * 60 = 86400 seconds)
    hour = seconds_total / 3600;
    seconds_total %= 3600;
    minute = seconds_total / 60;
    second = seconds_total % 60;
}

Clock::Clock(): hour(0), minute(0), second(0){
}

Clock::Clock(int seconds_total){
    if (seconds_total < 0){
        hour = 0;
        minute = 0;
        second = 0;
    }
    else{
        sec_to_hms(seconds_total);
    }
}

Clock::Clock(int h, int m, int s){
    if((h > 23 || h < 0)||(m > 59 || m < 0)||(s > 59 || s < 0)){
        hour = 0;
        minute = 0;
        second = 0;
    }
    else{
        hour = h;
        minute = m;
        second = s;
    }
}

int Clock::get_hour() const{
    return hour;
}

int Clock::get_minute() const{
    return minute;
}

int Clock::get_second() const{
    return second;
}

void Clock::set_hour(int arg){
    if(arg < 23 && arg > 0){
        hour = arg;
    }
}

void Clock::set_minute(int arg){
    if(arg < 59 && arg > 0){
        minute = arg;
    }
}

void Clock::set_second(int arg){
    if(arg < 59 && arg > 0){
        second = arg;
    }
}

void Clock::increment(){
    second++;
    if(second == 60){
        second = 0;
        minute++;
        if(minute == 60){
            minute = 0;
            hour = (hour + 1) % 24;
        }
    }
}

void Clock::decrement(){
    second--;
    if(second < 0){
        second = 59;
        minute--;
        if(minute < 0){
            minute = 59;
            hour--;
            if(hour < 0){
                hour = 23;
            }
        }
    }
}

void Clock:: add_seconds(int s){
    if (s<0) return;
    
    int total_seconds = hms_to_sec() + s;
    sec_to_hms(total_seconds);
}
