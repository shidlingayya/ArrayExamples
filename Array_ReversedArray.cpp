// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define SIZE 5
int main()
{
    int arr[SIZE] = { 1, 2, 3, 4, 5 };

    std::cout << "{";
    for (auto x : arr)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Reversed Array: " << std::endl;
    std::cout << "{";
    for (auto i = (SIZE-1); i >= 0; i--)
    {
        std::cout << arr[i] << ",";
    }
    std::cout << "}" << std::endl;

    return 0;
}