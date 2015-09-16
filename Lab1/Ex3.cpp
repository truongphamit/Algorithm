#include <iostream>
using namespace std;

int main() {
    int n;
    int s = 1;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        s *= i;
    }
    cout << "n! = " << s;
}


