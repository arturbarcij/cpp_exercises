//Two pointers
//Time complexity: O(n)
//Space: O(1)
//Given a sorted array, check if two elements sum up to a target.

#include <iostream>
#include <vector>
using namespace std;

bool twoSum(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        
        if (sum == target)
            return true;
        
        if (sum < target)
            left++; //need larger sum
        else
            right--; //need smaller sum
    }
    return false;
}
int main() {
    vector<int> nums = {1,2,3,5,7,9,12};
    int target = 10;

    cout << (twoSum(nums, target) ? "Match found" : "No match") << endl;
}