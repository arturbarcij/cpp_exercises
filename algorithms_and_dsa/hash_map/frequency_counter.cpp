#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int,int> countFrequency(const vector<int>& nums) {
    unordered_map<int,int> freq;

    for (int x : nums)
        freq[x]++; // default initializes 0 and increments;
    
        return freq;
}

int main() {
    vector<int> nums = {1,2,3,2,1,2,4,1};
    auto freq = countFrequency(nums);

    for (auto& [num, count] : freq)
        cout << num << " -> " << count << "\n";
}