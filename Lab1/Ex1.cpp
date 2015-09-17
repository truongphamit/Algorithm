#include <iostream>
using namespace std;

bool isPrimerNumber(int n);

int main() {
    int n;
    int s = 0;
    cout << "Enter the value for N: ";
    cin >> n;

    if (isPrimerNumber(n)) {
        cout << n << " is primer number";
    } else {
        cout << n << " is not primer number";
    }

}

bool isPrimerNumber(int n) {
    bool check = false;
    int s = 0;
    if (n > 0) {
        for (int i = 1; i <= n/2; i++) {
            if (n % i == 0) {
                s += i;
            }
        }
        if (s == n) check = true;
    }
    return check;
}


