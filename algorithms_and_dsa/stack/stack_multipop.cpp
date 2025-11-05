//Stack multipo(x k)
//O(n log n)

#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> data; //underlying container

public:
    void push(int x) {
        data.push_back(x);
    }

    bool pop() {
        if (data.empty()) return false;
        data.pop_back();
        return true;
    }

    void multipop(int k) {
        while (k > 0 && !data.empty()) {
            data.pop_back();
            k--;
        }
    }

    void print() {
        cout << "Stack (top -> bottom): ";
        for (int i = (int)data.size() - 1; i >= 0; --i)
            cout << data[i] << " ";
        cout << "\n";
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    s.print(); // 50 40 30 20 10

    cout << "Multipopping 3...\n";
    s.multipop(3);

    s.print(); // 20 10

    cout << "Multipopping 100 (bigger than size)...\n";
    s.multipop(100);

    s.print(); // empty

    return 0;
}