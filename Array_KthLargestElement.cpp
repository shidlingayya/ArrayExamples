#include <iostream>
#include <algorithm>
#include <vector>

int findKThLargestElement(std::vector<int> myInts, int kthelement)
{
    std::sort(myInts.begin(), myInts.end());  
    return myInts.at(kthelement-1);
}

int main()
{
    std::vector<int> myVector{ 1, 3, 2, 4, 5 };

    std::cout << "{";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;   

    std::cout << "3rd largest element:" << findKThLargestElement(myVector, 3) << std::endl;

    return 0;
}
