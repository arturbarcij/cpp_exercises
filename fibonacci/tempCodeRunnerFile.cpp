#include <iostream>

  int fib(int i) {
        if (i <= 1) {
            return i;
        } else {
            return fib(i) + fib(i-1);
        }
    }

//Fibonacci algorithm
int main() {
    int n = 0;
    
    std::cout << "Enter number: " << std::endl;
    std::cin >> n;

    std::cout << "Fibonacci(" << n << ") = " << fib(n) << std::endl;
}