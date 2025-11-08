#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(const vector<string>& words) {
    unordered_map<string, vector<string>> groups;
    for (const auto& w : words) {
        string key = w;
        sort(key.begin(), key.end());
        groups[key].push_back(w);
    }
    vector<vector<string>> res;
    res.reserve(groups.size());
    for (auto& [_, vec] : groups) res.push_back(move(vec));
    return res;
}

int main() {
    vector<string> words = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto res = groupAnagrams(words);
    for (auto& g : res) {
        for (auto& w : g) cout << w << " ";
        cout << "\n";
    }
}