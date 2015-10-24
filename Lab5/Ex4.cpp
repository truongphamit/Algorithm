#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

queue<string> copyFileToQueue(ifstream &input);
void printQueue(queue<string> q);

int main() {
    ifstream in_stream;
    in_stream.open("input.txt");
    queue<string> q = copyFileToQueue(in_stream);
    printQueue(q);
}

queue<string> copyFileToQueue(ifstream &input) {
    queue<string> q;
    string s;
    while (!input.eof()) {
        getline(input, s);
        q.push(s);
    }
    return q;
}

void printQueue(queue<string> q) {
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
}
