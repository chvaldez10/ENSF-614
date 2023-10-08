#include "lab3Clock.h"

Clock::Clock() : hour(0), minute(0), second(0) {}

Clock::Clock(int s) {
	if (s < 0) {
		hour = 0;
		minute = 0;
		second = 0;
	}
	else {
		sec_to_hms(s);
	}
}

Clock::Clock(int h, int m, int s) {
	if ((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
		hour = h;
		minute = m;
		second = s;
	}
	else {
		hour = 0;
		minute = 0;
		second = 0;
	}
}

int Clock::get_hour() const {
	return hour;
}

int Clock::get_minute() const{
	return minute;
}

int Clock::get_second() const {
	return second;
}

void Clock::set_hour(int h) {
	if (h >= 0 && h < 24) {
		hour = h;
	}
}

void Clock::set_minute(int m) {
	if (m >= 0 && m < 60) {
		minute = m;
	}
}

void Clock::set_second(int s) {
	if (s >= 0 && s < 60) {
		second = s;
	}
}

void Clock::increment() {
	int currentSeconds = hms_to_sec();
	sec_to_hms(currentSeconds + 1);
}

void Clock::decrement() {
	int currentSeconds = hms_to_sec();
	// Check for underflow
	if (currentSeconds == 0) {
		currentSeconds = 86400;  // Set to one full day so that -1 brings it to 23:59:59
	}
	sec_to_hms(currentSeconds - 1);
}

void Clock::add_seconds(int s) {
	if (s > 0) {
		int currentSeconds = hms_to_sec();
		sec_to_hms(currentSeconds + s);
	}
}

int Clock::hms_to_sec() {
	return hour * 3600 + minute * 60 + second;
}

void Clock::sec_to_hms(int s) {
	while (s < 0) {
		s += 86400;  // Handle negative seconds
	}
	s %= 86400;
	hour = s / 3600;
	minute = (s % 3600) / 60;
	second = s % 60;
}