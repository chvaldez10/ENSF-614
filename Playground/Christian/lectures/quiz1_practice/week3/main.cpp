#include <iostream>
using namespace std;

struct point {
    int x;
    int y;
    char label;
};

void largest(int* a, int n, int* max);
char* reverseStrCat(char* dest, char* source);
bool up_then_down(const int* arr, int n);

int main(void) {
    char dest[20] = "ABC";
    char source[20] = "WXYZ";
    char* result = reverseStrCat(dest, source);
    cout << "result = " << result << endl;

    return 0;
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

    *dest = '\0';
    return orgDestAddress;
}

void largest(int* a, int n, int* max) {
    *max = *a;

    for (int i = 1; i < n; i++) {
        if (*(a + i) > *max) {
            *max = *(a + i);
        }
    }
}