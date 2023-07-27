#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void sortVector(std::vector<T>& vec) 
{
    std::sort(vec.begin(), vec.end());
}

int main() 
{
    size_t arraySize;
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    std::vector<int> vec;

    std::cout << "Enter " << arraySize << " integers:\n";
    for (size_t i = 0; i < arraySize; ++i) 
	{
        int num;
        std::cin >> num;
        vec.push_back(num);
    }

    sortVector(vec);

    std::cout << "Sorted array:\n";
    for (const auto& num : vec) 
	{
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
}
