#include <iostream>
using namespace std;

void largest(int* a, int n, int* max);

int main(void) {
    int arr1[] = { 3, 7, 2, 5, 8 };
    int result;
    largest(arr1, 5, &result);

    cout << "Expected: 8, Got: " << result << endl;

    return 0;
}

void largest(int* a, int n, int* max) {
    *max = *a;

    for (int i = 1; i < n; i++) {
        if (*(a + i) > *max) {
            *max = *(a + i);
        }
    }
}