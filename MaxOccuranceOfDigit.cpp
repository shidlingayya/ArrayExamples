#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

int migratoryBirds(std::vector<int> arr)
{
    int max = 0;
    int digit = 0;
    std::map<int, int> myMap{};
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    for (auto i = 0u; i < arr.size(); i++)
    {
        myMap[arr.at(i)]++;
    }

    //Initialize some digit
    for (auto x : myMap)
    {
        if (x.second > max)
        {
            max = x.second;
            digit = x.first;
        }
    }
    return digit;
}


int main()
{
    std::vector<int> arr = { 1, 1, 2, 2, 3 };
    std::cout << "max occurance of digit: " << migratoryBirds(arr) << std::endl;

    arr = { 1 ,4 ,4 ,4 ,5 ,3 };
    std::cout << "max occurance of digit: " << migratoryBirds(arr) << std::endl;

    arr = { 1 ,2 ,3 ,4 ,5 ,4 ,3 ,2 ,1 ,3 ,4 };
    std::cout << "max occurance of digit:" << migratoryBirds(arr) << std::endl;

    return 0;
}