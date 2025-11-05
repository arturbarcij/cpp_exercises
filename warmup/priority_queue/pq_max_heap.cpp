#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq; // max-heap by default

    for (int x : {5, 1, 9, 3, 7}) pq.push(x);

    cout << "Max-heap order ";
    while (!pq.empty()) {
        cout << pq.top() << " "; // largest available tuple_element
        pq.pop();
    }
    cout << "\n";
    return 0;
}