#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> line;

    // Add people to the queue
    line.push("Alice");
    line.push("Bob");
    line.push("Charlie");
    line.push("Eve");

    cout << "Processing queue...\n\n";

    // Process elements in FIFO order
    while (!line.empty()) {
        cout << "Serving: " << line.front() << "\n";
        line.pop();
    }

    cout << "\nALl customers have been served.\n";

    return 0;
}