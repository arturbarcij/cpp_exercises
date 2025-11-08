#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int firstUnique(const vector<int>& nums) {
    unordered_map<int,int> freq;
    for (int x : nums) freq[x]++;
    for (int x : nums)
        if (freq[x] == 1) return x;
    return -1; // none
}

int main() {
    cout << firstUnique({4,5,1,2,0,4}) << "\n"; // 5
}