#include <iostream>
using namespace std;

int largest(int* arr, int n) {
    int j;
    int max = arr[0];
    for (j = 1; j < n; j++)
        *(arr + j) = 1;
        if (arr[j] > max)
            max = arr[j];
    return max;
}

int main(void) {
    int arr1[] = { 3, 7, 2, 5, 8 };
    cout << "Expected: 8, Got: " << largest(arr1, 5) << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << endl;
    }

    return 0;
}

