#include <iostream>

/*
You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
*/


int main() {
    int n;
    std::cin >> n;
    int xor_all = 0, xor_given = 0;

    for (int i = 1; i <= n; i++) {
        xor_all ^= i; // XOR of 1..n
    }

    for (int i = 0, x; i < n - 1; i++) {
        std::cin >> x;
        xor_given ^= x; // XOR of all given numbers
    }

    std::cout << (xor_all ^ xor_given) << "\n";
    return 0;
}