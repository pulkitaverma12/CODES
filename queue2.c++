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

    queue<int> q2;
    q2.swap(q);

    cout << "q size: " << q.size() << endl;
    cout << "q2 size: " << q2.size() << endl;

    return 0;
}
