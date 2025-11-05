//Fixed window sum
// Time: O(n)
// Space: O(1) extra (except output vector)

#include <iostream>
#include <vector>
using namespace std;

//Return vector of sums of each sliding window of size k
vector<int> slidingWindowSum(const vector<int>& nums, int k) {
    vector<int> res;
    if (k > nums.size()) return res;

    int windowSum = 0;

    // Build the first window
    for (int i = 0; i < k; ++i)
        windowSum += nums[i];
    
    res.push_back(windowSum);

    // Slide the window
    for (int i = k; i < (int)nums.size(); ++i) {
        windowSum += nums[i];   // add new element
        windowSum -= nums[i - k];   // remove old element
        res.push_back(windowSum);
    }

    return res;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;

    vector<int> out = slidingWindowSum(nums, k);

    for (int s : out)
        cout << s << " ";
    cout << endl;

    return 0;
}