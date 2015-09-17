#include <iostream>
using namespace std;

int giaithua(int n);

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << n << "! = " << giaithua(n);
}

int giaithua(int n) {
    int s = 1;
    for (int i = 2; i <= n; i++) {
        s *= i;
    }
    return s;
}
