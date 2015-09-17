#include <iostream>

using namespace std;

int maxOfArray(int a[], int n);

int main() {
    int length;
    int* arr;
    cout << "Enter the value for length: ";
    cin >> length;
    arr = new int[length];
    cout << "Enter the values for Array: " << endl;
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }
    cout << "Max is : " << maxOfArray(arr, length);
}

int maxOfArray(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

