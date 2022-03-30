// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <algorithm>
#define SIZE 5
int main()
{
    int arr[SIZE] = { 1, 4, 2, 4, 5 };

    std::cout << "{";
    for (auto x : arr)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Sorting Array" << std::endl;
    for (auto i = 0; i < SIZE-1; i++)
    {
        for (auto j = 0; j < SIZE-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
            }
        }
    } 

    std::cout << "{";
    for (auto x : arr)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    return 0;
}
