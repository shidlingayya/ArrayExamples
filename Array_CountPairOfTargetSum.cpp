#include <iostream>
#include <algorithm>
#include <vector>

int countPairWithGivenTarget(std::vector<int> myVector, int target)
{
    int countPair = 0;
    for (auto i = 0; i < myVector.size(); i++)
    {
        for (auto j = i+1; j < myVector.size(); j++)
        {
            if (myVector.at(i) + myVector.at(j) == target)
            {
                std::cout << "Index Pair " << "(" << i << "," << j << ")==>" <<"target: " << target<< std::endl;
                countPair++;
            }
        }
    }
    return countPair;
}

int main()
{
    std::vector<int> myVector{ 6,1,2,8,3,4,7,10,5 };
    
    std::cout << "{";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    //{ 6,1,2,8,3,4,7,10,5 } --> {6, 1} {3, 4} {2, 5}
    std::cout << "Missing element in range of above array is: " << countPairWithGivenTarget(myVector, 7) << std::endl;

    //{ 6,1,2,8,3,4,7,10,5 } --> {6, 4} {3, 7} {2, 8}
    std::cout << "Missing element in range of above array is: " << countPairWithGivenTarget(myVector, 10) << std::endl;

    return 0;
}
