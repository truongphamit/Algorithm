#include <iostream>
#include <stack>
using namespace std;

bool isTrue(string s);

int main() {
    cout << isTrue("{((()))}()");
}

bool isTrue(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{') {
                st.push(s[i]);
        }
        if (s[i] == ')' || s[i] == '}') {
            if (st.empty()) {
                return false;
            } else {
                if ((s[i] == '(' && st.top() == ')') || (s[i] == '{' && st.top() == '}')) {
                    return false;
                } else {
                    st.pop();
                }
            }
        }
    }

    if (!st.empty()) return false;
    return true;
}
