#include <iostream>
using namespace std;

void sort(int a[], int n);
void inputForArray(int a[], int n);
void printArray(int a[], int n);

int main() {
    int n;
    int* a;
    cout << "Nhap n: ";
    cin >> n;
    a = new int[n];
    inputForArray(a, n);
    sort(a, n);
    printArray(a, n);
}

void inputForArray(int a[], int n) {
    cout << "Nhap day" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
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

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
