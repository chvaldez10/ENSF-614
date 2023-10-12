// lab2exe_C.cpp
// ENSF 614 Lab 2 Exercise C

#include <iostream>
using namespace std;

int what(const int* a, int n);

// This function was not written for easy readability!
// It's a drill exercise about pointer arithmetic!
int what(const int* a, int n)
{
    const int* max = a, * min = a + n - 1, * guard = a + n;
    const int* p, * q;
    
    for (p = a + 1; p != guard; p++) {
        if (*p > *max)
            max = p;
    }
    
    for (q = a + n - 1; q != a; q--) {
        if (q[-1] < *min)
            min = q - 1;
    }

    cout << "*guard = " << guard << endl;
    cout << "*max = " << max << endl;
    cout << "*min = " << min << endl;
    cout << "*p = " << p << endl;
    cout << "*q = " << q << endl;

    // point one (after the 2nd loop has finished)

    return min - max;
}

int main(void){
    int w;
    int x[] = { 99, 0, 0, -99, 0, 0 };
    int y[] = { 1, 0, 100, 2, 0, 3 };

    cout << "address of y0 = " << &y[0] << endl;
    cout << "address of y2 = " << &y[2] << endl;
    cout << "address of y4 = " << &y[4] << endl;
    cout << "address of y5 = " << &y[5] << "\n\n\n";

    w = what(x, sizeof(x) / sizeof(int));
    cout << "1st result: " << w << ".\n\n\n";

    w = what(y, sizeof(y) / sizeof(int));
    cout << "2nd result: " << w << ".\n";

    return 0;
}
