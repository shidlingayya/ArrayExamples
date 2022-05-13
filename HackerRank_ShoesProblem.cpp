#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

/*HackerRank == 
There is a large pile of socks that must be paired by color. 
Given an array of integers representing the color of each sock, 
determine how many pairs of socks with matching colors there are.
*/

int GetColourPair(std::vector<int> arr)
{
    std::map<int, int> myMap{};
    for (auto i = 0U; i < arr.size(); i++)
    {
        myMap[arr.at(i)]++;
    }

    int counter = 0;

    for (auto x : myMap)
    {
        if (x.second >= 2)
        {
            counter = counter + (x.second / 2);
        }
    }
    return counter;
}

int main()
{
    std::vector<int> arr = { 1, 2, 1, 2, 1, 3, 2 };
    std::cout << "GetColourPair(): " << GetColourPair(arr) << std::endl;

    arr = { 10, 20, 20, 10, 10, 30, 50, 10, 20 };
    std::cout << "GetColourPair(): " << GetColourPair(arr) << std::endl;
    return 0;
}