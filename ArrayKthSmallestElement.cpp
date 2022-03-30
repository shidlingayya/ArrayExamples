#include <iostream>
#include <algorithm>
#include <vector>

int findKThSmallestElement(std::vector<int> myInts, int kthelement)
{
    std::sort(myInts.begin(), myInts.end());
    std::reverse(myInts.begin(), myInts.end());
    return myInts.at(kthelement-1);
}

int main()
{
    std::vector<int> myVector{ 10, 4, 11, 30, 25 };

    std::cout << "{";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;   

    std::cout << "3rd smallest element:" << findKThSmallestElement(myVector, 3) << std::endl;

    return 0;
}
