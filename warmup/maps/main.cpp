#include <iostream>
#include <map>
#include <cctype>
using namespace std;


int main() {
    string s = "Hello world";
    map<char,int> freq;
    for (char c: s) if (isalpha((unsigned char)c)) freq[c]++;

    for (auto &kv : freq) cout << kv.first << " -> " << kv.second << "\n";
}