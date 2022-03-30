// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int max = arr[0];
    int min = arr[1];

    for (auto i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    std::cout << "{";
    for (auto x : arr)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "max element: " << max << std::endl;
    std::cout << "min element: " << min << std::endl;

    return 0;
}