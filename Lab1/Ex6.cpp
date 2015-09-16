#include <iostream>
using namespace std;

int ucln(int a, int b);

int main() {
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    cout << "UCLN: " << ucln(a, b);
}

int ucln(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
