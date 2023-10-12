//
//  lab3Clock.h
//  ENSF 614 - Lab 3 - Exercise C
//  Section B01
//  Completed by: Alton Wong and Christian Valdez
//  Submission Date: October 13, 2023
//

#ifndef lab3Clock_h
#define lab3Clock_h
/*The following class represents a 24-hour clock and contains three private integer data members called hour, minute, and second.
 */
class Clock{
private:
    int hour;
    int minute;
    int second;
    
    int hms_to_sec();
    
    void sec_to_hms(int seconds_total);
    
public:
    Clock();
    //PROMISES: initializes the data-members: hour, minute, second to zero
    
    Clock(int seconds_total);
    //PROMISES: initializes the data-members based on total seconds
    
    Clock(int h, int m, int s);
    //PROMISES: initializes the data-members with the supplied values for hour, minute, and second
    
    int get_hour() const;
    //PROMISES: returns hour data member of the clock
    
    int get_minute() const;
    //PROMISES: returns minute data member of the clock
    
    int get_second() const;
    //PROMISES: returns minute data member of the clock
    
    void set_hour(int arg);
    //PROMISES: sets a new value to the hour component of clock with the value of arg
    
    void set_minute(int arg);
    //PROMISES: sets a new value to the minute component of clock with the value of arg

    void set_second(int arg);
    //PROMISES: sets a new value to the second component of clock with the value of arg
    
    void increment();
    //PROMISES: increments clock by one second
    
    void decrement();
    //PROMISES: decrements clock by one second
    
    void add_seconds(int s);
    //PROMISES: adds number of seconds to the clock

};

#endif /* lab3Clock_h */
