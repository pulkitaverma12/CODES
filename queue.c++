#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(90);
    q.push(89);
    q.push(12);
    q.push(11);
    q.push(34);

    cout << "Queue before popping: ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Pop elements from the queue
    cout << "Popping elements from the queue:" << endl;
    while (!q.empty()) {
        cout << "Popped: " << q.front() << endl;
        q.pop();
    }

    cout << "Queue size after popping all elements: " << q.size() << endl;

    return 0;
}
