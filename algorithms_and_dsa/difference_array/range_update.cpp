#include <iostream>
#include <vector>
#include <array>
using namespace std;

/*
 * applyRangeAdds:
 * ----------------
 * Efficiently applies multiple range-add operations on a size-n array.
 *
 * For each update [L, R, val], we want:
 *     a[L..R] += val
 *
 * Using a difference array:
 *     diff[L] += val
 *     diff[R+1] -= val      (if R+1 is inside bounds)
 *
 * After processing all updates, we compute the prefix sum of diff[]
 * to reconstruct the final array in O(n).
 *
 * Complexity:
 *     Building diff:      O(q)
 *     Reconstruct array:  O(n)
 *     Total:              O(n + q)
 */
vector<long long> applyRangeAdds(int n, const vector<array<int,3>>& updates) {

    // Difference array with n+1 size to safely mark R+1 positions.
    vector<long long> diff(n + 1, 0);

    // Apply difference updates
    for (auto [L, R, val] : updates) {
        diff[L] += val;

        // Only subtract at R+1 if within valid range
        if (R + 1 < n)
            diff[R + 1] -= val;
    }

    // Build the final array using prefix cumulative sum over diff[]
    vector<long long> result(n, 0);
    long long running = 0;

    for (int i = 0; i < n; ++i) {
        running += diff[i];
        result[i] = running;
    }

    return result;
}

int main() {
    int n = 10;

    // Each update is [L, R, value]
    vector<array<int, 3>> updates = {
        {1, 3, 5},   // Add +5 to indices 1..3
        {2, 6, 2},   // Add +2 to indices 2..6
        {0, 0, 7}    // Add +7 to index   0
    };

    auto finalArray = applyRangeAdds(n, updates);

    for (long long x : finalArray)
        cout << x << " ";
    cout << "\n";

    // Expected Output:
    // 7 5 7 7 2 2 2 0 0 0
}
