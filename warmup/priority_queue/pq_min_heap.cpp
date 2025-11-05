#include <iostream>
#include <queue>
using namespace std;


int main() {
    priority_queue<int, vector<int>, greater<int>> pq; //min-heap

    for (int x : {5, 1, 9, 3, 7}) pq.push(x);
    
    cout << "Min-heap order: ";
    while (!pq.empty()) {
        cout << pq.top() << " "; // smallest available element
        pq.pop();
    }
    cout << "\n";
    return 0;
}