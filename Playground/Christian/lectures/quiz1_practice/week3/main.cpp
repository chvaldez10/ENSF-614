#include <iostream>
using namespace std;

struct point {
    int x;
    int y;
    char label;
};

typedef struct Clock {
    int hours;
    int minutes;
    double seconds;
}Clock;

void largest(int* a, int n, int* max);
char* reverseStrCat(char* dest, char* source);
bool upAndDown(const int* arr, int n);
bool allDiff(const char* left, const char* right);
int compareMyStrings(const char* arg1, const char* arg2);
Clock millisecond_to_Clock(long milliseconds);

int main(void) {
    // reverse cat
    char dest[20] = "ABC";
    char source[20] = "WXYZ";
    char* reverseCatResult = reverseStrCat(dest, source);


    // up and down
    int arr[] = { 1, 2, 3 ,4, 5, 4, 3, 2, 1 };
    bool upAndDownResult = upAndDown(arr, 9);
    int arrLength = sizeof(arr) / sizeof(int);

    // all diff
    char left[] = "abcd";
    char right[] = "efghd";
    bool allDiffResult = allDiff(left, right);

    // compare my strings
    char left2[] = "abcd";
    char right2[] = "abcde";
    int test = compareMyStrings(left2, right2);

    // clock
    long time = 18123400;
    Clock newClock = millisecond_to_Clock(time);

    return 0;
}

int compareMyStrings(const char* arg1, const char* arg2) {
    while (*arg1 != '\0' && *arg2 != '\0' && (*arg1 == *arg2)) {
        arg1++;
        arg2++;
    }

    int diff = int(*arg1) - int(*arg2);

    if (diff == 0) {
        return diff;
    }
    else if (diff > 0) {
        return 1;
    }
    else {
        return -1;
    }
}

Clock millisecond_to_Clock(long milliseconds) {
    int hourConversion = 1000 * 60 * 60;
    int minuteConversion = 1000 * 60;

    int hours = milliseconds / hourConversion;
    int minutesLeft = milliseconds - hours * hourConversion;
    int minutes = minutesLeft / minuteConversion;
    int seconds = minutesLeft % minuteConversion;

    Clock clock = {hours, minutes, double(seconds)/1000};
    return clock;
}

char* reverseStrCat(char* dest, char* source) {
    char* orgSourceAdress = source;
    char* orgDestAddress = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*source != '\0') {
        source++;
    }

    while (source != orgSourceAdress) {
        source--;
        *dest = *source;
        dest++;
    }

    *dest = '\0'; // dont forget this
    return orgDestAddress;
}

bool allDiff(const char* left, const char* right) {
    const char* originalRightAddress = right;

    while (*left != '\0') {
        while (*right != '\0') {
            if (*left == *right) {
                return false;
            }
            right++;
        }
        right = originalRightAddress;
        left++;
    }

    return true;
}

bool upAndDown(const int* arr, int n) {
    int max = *arr;
    int j = 0;

    for (int i = 1; i < n; i++) {
        j = i;

        if (*(arr + i) > max) {
            max = *(arr + i);
        }
        else {
            break;
        }
    }
    int min = max;

    while (j < n) {
        if (*(arr + j) < min) {
            min = *(arr + j);
        }
        else {
            return false;
        }

        j++;
    }
    return true;
}

void largest(int* a, int n, int* max) {
    *max = *a;

    for (int i = 1; i < n; i++) {
        if (*(a + i) > *max) {
            *max = *(a + i);
        }
    }
}