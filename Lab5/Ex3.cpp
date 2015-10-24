#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> pushToQueue();
stack<int> copyQueueToStack(queue<int> q);
void printStack(stack<int> st);

int main() {
    queue<int> q = pushToQueue();
    stack<int> st = copyQueueToStack(q);
    printStack(st);
}

queue<int> pushToQueue() {
    queue<int> q;
    for (int i = 1; i <= 100; i++) {
        q.push(i);
    }
    return q;
}

stack<int> copyQueueToStack(queue<int> q) {
    stack<int> st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    return st;
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
