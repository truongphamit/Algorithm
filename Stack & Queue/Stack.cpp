#include <iostream>
using namespace std;

template <class T>
class Node {
    public:
        T data;
        Node *next;
        Node() {
            next = NULL;
        }
};

template <class T>
class Stack {
    private:
        Node<T> *pTop = NULL;
        int count = 0;
    public:
        void push(T t) {
            Node<T> *p = new Node<T>;
            p->data = t;
            p->next = pTop;
            pTop = p;
            ++count;
        }

        T pop() {
            if (!isEmpty()) {
                T t = pTop->data;
                pTop = pTop->next;
                --count;
            return t;
            }
            cout << "Stack is empty!";
            return NULL;
        }

        bool isEmpty() {
            if (pTop == NULL) return true;
            return false;
        }

        int size() {
            return count;
        }

        T top() {
            if (!isEmpty()) {
                return pTop->data;
            }
            cout << "Stack is empty!";
            return NULL;
        }
};

int main() {
    Stack<int> st;
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    cout << st.top() << endl;
    cout << st.pop() << endl;
    cout << st.size();
}
