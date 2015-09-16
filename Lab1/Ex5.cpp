#include <iostream>
using namespace std;

void sort(int a[], int n);

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    cout << "Nhap day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}
