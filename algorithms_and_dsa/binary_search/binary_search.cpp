//Binary search
//Time complexity = O(log n)
//Space = O(1)
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // not found
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 12, 15};
    int target = 9;

    int idx = binarySearch(nums, target);
    if (idx != -1) cout << "Found at index " << idx << "\n";
    else cout << "Not found\n";

    return 0;
}