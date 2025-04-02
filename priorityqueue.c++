#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;  // Max-Heap (default behavior)

    // Pushing elements into the priority queue
    pq.push(90);
    pq.push(12);
    pq.push(1);
    pq.push(123);
    pq.push(34);

    cout << "Priority Queue before popping: ";
    priority_queue<int> temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Popping elements from the priority queue
    cout << "Popping elements from the priority queue:" << endl;
    while (!pq.empty()) {
        cout << "Popped: " << pq.top() << endl;
        pq.pop();
    }

    cout << "Priority Queue size after popping all elements: " << pq.size() << endl;

    return 0;
}
