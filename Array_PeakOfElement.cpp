// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int peakElement(int arr[], int n)
{
    int temp = 0;
    for (auto i = 0; i < n; i++)
    {
        if (arr[i+1] > arr[i])
        {
            temp = i + 1;
            break;
        }
    }
    return temp;
}

int main()
{
    int arr[] = { 1, 2, 3 };
    std::cout << "Peak of the element: " << peakElement(arr, 3) << std::endl;
    return 0;
}