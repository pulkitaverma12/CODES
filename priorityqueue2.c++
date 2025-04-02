#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Min-Heap (Reverse order of default Priority Queue)
    priority_queue<int, vector<int>, greater<int>> pq;  

    // Pushing elements into the priority queue
    pq.push(90);
    pq.push(89);
    pq.push(12);
    pq.push(11);
    pq.push(34);

    cout << "Priority Queue before popping: ";
    priority_queue<int, vector<int>, greater<int>> temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Popping elements in reverse order (smallest first)
    cout << "Popping elements from the priority queue:" << endl;
    while (!pq.empty()) {
        cout << "Popped: " << pq.top() << endl;
        pq.pop();
    }

    cout << "Priority Queue size after popping all elements: " << pq.size() << endl;

    return 0;
}
