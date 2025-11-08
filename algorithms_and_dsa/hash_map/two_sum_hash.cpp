#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> seen; // value -> index
    for (int i = 0; i < (int)nums.size(); ++i) {
        int need = target - nums[i];
        if (seen.count(need)) return {seen[need], i};
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> a = {2,7,11,15};
    int target = 9;
    auto ans = twoSum(a, target);
    if (!ans.empty()) cout << ans[0] << " " << ans[1] << "\n"; // 0 1
}