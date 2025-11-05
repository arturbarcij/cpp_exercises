#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {

    // ---- 1. WRITE TO FILE ----
    {
        ofstream out("numbers.txt"); // open file for writing
        if (!out) {
            cout << "Error opening file for writing.\n";
            return 1;
        }

        for (int i = 1; i <= 5; ++i)
            out << i << "\n";       // write numbers 1..5 each on a new line
    }

    // ---- 2. READ BACK FROM FILE ----
    ifstream in("numbers.txt"); // open file from reading
    if (!in) {
        cout << "Error opening file for reading.\n";
        return 1;
    }

    vector<int> values;
    int x;

    while (in >> x) {
        values.push_back(x); // read integers until EOF
    }

    // ---- 3. COMPUTE SUM ----
    int sum = 0;
    for (int v : values)
        sum += v;

    
    // ---- 4. PRINT RESULTS ----
    cout << "Read " << values.size() << " numbers.\n";
    cout << "Sum = " << sum << "\n";

    return 0;
}