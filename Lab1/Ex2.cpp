#include <iostream>

using namespace std;

int maxOfArray(int a[], int n);

int main() {
    int a[] = {1,2,3,4,5};
    cout << maxOfArray(a, 5);
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
