#include <iostream>
#include <vector>
#include <map>

bool validPair(std::vector<int> arr, int s, int t, int target)
{
    int sum = 0;
    for (auto i = s; i < t; i++)
    {
        sum += arr[i];
    }

    if (sum == target)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Sliding window concept can be used to solve this problem
int getPairs(std::vector<int> arr, int d, int m)
{
    int pairs = 0;

    if (arr.size() <= 1)
    {
        pairs++;
        return pairs;
    }

    for (auto i = 0; i < arr.size()-1; i++)
    {
        if (validPair(arr, i, i+m, d))
        {
           pairs++;
        }
    }
    return pairs;
}

// Driver code
int main()
{
    std::vector<int> arr = { 2, 2, 1, 3, 2 };
    std::cout << "getPairs(): " << getPairs(arr, 4, 2) << std::endl;

    arr = { 1, 2, 1, 3, 2 };
    std::cout << "getPairs(): " << getPairs(arr, 3, 2) << std::endl;

    arr = { 1, 1, 1, 1, 1, 1};
    std::cout << "getPairs(): " << getPairs(arr, 3, 2) << std::endl;
    
    arr = {4};
    std::cout << "getPairs(): " << getPairs(arr, 4, 1) << std::endl;

    return 0;
}