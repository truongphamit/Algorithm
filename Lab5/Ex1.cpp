#include <iostream>
#include <stack>
using namespace std;

void convertToBinary(int n);

int main() {
    convertToBinary(10);
}

void convertToBinary(int n) {
    stack<int> binary;
    while (n != 0) {
        binary.push(n % 2);
        n /= 2;
    }
    while (!binary.empty()) {
        cout << binary.top();
        binary.pop();
    }
}
