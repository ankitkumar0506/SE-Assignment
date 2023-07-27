#include <iostream>

// Template function to swap two values
template <typename T>
void swapValues(T& a, T& b) 
{
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    // Input two values
    std::cout << "Enter two values to swap:" << std::endl;
    int value1, value2;
    std::cin >> value1 >> value2;

    // Output the original values
    std::cout << "Original values: " << value1 << " " << value2 << std::endl;

    // Call the template function to swap the values
    swapValues(value1, value2);

    // Output the swapped values
    std::cout << "Swapped values: " << value1 << " " << value2 << std::endl;

}
