#include <iostream>
using namespace std;

//add 1 to the original variable
void increment(int &x) {
    x = x + 1;  //modifies original x in main
}

//swap two values using references
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before increment: a = " << a << endl;
    increment(a); // modifies 'a' directly
    cout << "After increment: a = " << a << endl;

    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b); //swap variables
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}