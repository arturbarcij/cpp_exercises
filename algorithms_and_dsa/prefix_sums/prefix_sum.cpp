#include <iostream>
#include <vector>
using namespace std;


vector<int> buildPrefix(const vector<int>& nums) {
    int n = nums.size();
    vector<int> pref(n);
    pref[0] = nums[0];

    for (int i = 1; i < n; ++i)
        pref[i] = pref[i - 1] + nums[i];
    
    return pref;
}

int main() { 
    vector<int> nums = {2, 3, 5, 1};
    vector<int> pref = buildPrefix(nums);

    for(int x : pref) cout << x << " ";
    cout << endl;
}