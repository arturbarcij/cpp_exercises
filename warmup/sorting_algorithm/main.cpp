#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool byScoreDesc(const pair<string,int>& a, const pair<string,int>& b) {
    return a.first < b.first; // ">" -> Ascending order, sort by name
}

int main() {
    vector<pair<string,int>> students = {
        {"Arthur", 90},
        {"Lisa", 80},
        {"Eve", 95}
    };
    students.push_back({"Bob", 85}); //Add new students
    sort(students.begin(), students.end(), byScoreDesc);

    for (auto &p : students)
        cout << p.first << ": " << p.second << "\n";
}