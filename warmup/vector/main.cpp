#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<string, int>> students;
    students.push_back({"Arthur", 90});
    students.push_back({"Lisa", 80});

    for (pair<string,int> p :  students) {
        cout << p.first << " scored " << p.second << endl;
    }
}