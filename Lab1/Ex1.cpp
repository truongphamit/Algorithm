#include <iostream>
using namespace std;

int main() {
    int n;
    int s = 0;
    cout << "Nhap N: ";
    cin >> n;

    if (n <=0 ) {
        cout << n << " is not primer number";
    } else {
        for (int i = 1; i <= n/2; i++) {
            if (n % i == 0) {
                s += i;
            }
        }
    }

    if (s == n) {
        cout << n << " is primer number";
    } else {
        cout << n << " is not primer number";
    }

}

