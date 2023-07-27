#include <iostream>

class NumberSwapper {
public:
    int num1;
    int num2;

public:
    NumberSwapper(int a, int b) : num1(a), num2(b) {}
    
    friend void swapNumbers(NumberSwapper& ns);
};

// Define the friend function outside the class
void swapNumbers(NumberSwapper& ns) {
    // Swapping without using a third variable
    ns.num1 = ns.num1 + ns.num2;
    ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    NumberSwapper ns(a, b);

    std::cout << "Before swapping: a = " << ns.num1 << ", b = " << ns.num2 << std::endl;

    // Call the friend function to swap the numbers
    swapNumbers(ns);

    std::cout << "After swapping: a = " << ns.num1 << ", b = " << ns.num2 << std::endl;

    return 0;
}
