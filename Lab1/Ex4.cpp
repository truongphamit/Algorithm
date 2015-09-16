#include <iostream>
using namespace std;

bool check(int a[], int n);

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (check(a, n)) {
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
