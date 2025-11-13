// CSES: Dynamic Range Sum Solve https://cses.fi/problemset/task/1648
// Using Fenwick Tree (Binary Indexed Tree) for O(log n) operations

#include <iostream>
#include <vector>
using namespace std;

class FenwickTree {
private:
    vector<long long> tree;
    int n;
    
public:
    FenwickTree(vector<long long>& arr) {
        n = arr.size();
        tree.assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            updateTree(i, arr[i]);
        }
    }
    
    void updateTree(int i, long long delta) {
        i++;
        while (i <= n) {
            tree[i] += delta;
            i += i & (-i);
        }
    }
    
    long long query(int i) {
        i++;
        long long sum = 0;
        while (i > 0) {
            sum += tree[i];
            i -= i & (-i);
        }
        return sum;
    }
    
    long long rangeQuery(int l, int r) {
        if (l == 0) return query(r);
        return query(r) - query(l - 1);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n >> q;
    
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    FenwickTree ft(arr);
    
    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int k;
            long long u;
            cin >> k >> u;
            k--;
            long long delta = u - arr[k];
            arr[k] = u;
            ft.updateTree(k, delta);
        }
        else {
            int a, b;
            cin >> a >> b;
            a--; b--;
            cout << ft.rangeQuery(a, b) << "\n";
        }
    }
    
    return 0;
}
