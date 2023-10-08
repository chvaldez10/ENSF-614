#ifndef lab3_exe_B_Clock
#define lab3_exe_B_Clock

class Clock {
private:
	int hour;
	int minute;
	int second;
	int hms_to_sec();
	void sec_to_hms(int s);

public:
	Clock();
	// PROMISES: initialize the clock to zero

	Clock(int s);
	// PROMISES: initializes the clock based on seconds
	// if th the given argument is negativem the constructor initializes clock to zero

	Clock(int h, int m, int s);
	// PROMISES: initializes hour, minute, seconds
	// set values to zero if there bad input

	int get_hour() const;

	int get_minute() const;

	int get_second() const;

	void set_hour(int h);

	void set_minute(int m);

	void set_second(int s);

	void increment();

	void decrement();

	void add_seconds(int s);
};

#endif // lab3_exe_B_Clock