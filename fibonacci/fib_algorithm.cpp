#include <iostream>

//Recursive fibonacci function
int fib(int i) {
        if (i <= 1) {
            return i;
        } else {
            return fib(i - 1) + fib(i - 2);
        }
    }

//Fibonacci algorithm
int main() {
    int n = 0;
    
    std::cout << "Enter number: " << std::endl;
    std::cin >> n;

    std::cout << "Fibonacci(" << n << ") = " << fib(n) << std::endl;
}