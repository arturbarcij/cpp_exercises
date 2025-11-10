#include <iostream>
#include <vector>
using namespace std;

// Assumes nums is sorted non-decreasing
int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return 1;

    int j = 0; // index of last unique element
    for (int i = 1; i < n; ++i) {
        if (nums[i] != nums[j]) {
            ++j;
            nums[j] = nums[i];
        }
    }
    return j + 1; // new length of unique prefix
}

int main() {
    vector<int> arr = {1, 1, 2};

    int len = removeDuplicates(arr);

    cout << "New length: " << len << "\nNew array: ";
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << (i + 1 < len ? ' ' : '\n');
    }
    return 0;
}
