#include <iostream>
using namespace std;

bool check(int a[], int n);
void inputForArray(int a[], int n);

int main() {
    int length;
    int* arr;
    cout << "Nhap do dai day: ";
    cin >> length;
    arr = new int[length];
    inputForArray(arr, length);
    if (check(arr, length)) {
        cout << "La day tang dan";
    } else {
        cout << "Khong la day tang dan";
    }
}

 

bool check(int a[], int n) {
    bool check = true;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            check = false;
        }
    }
    return check;
}
