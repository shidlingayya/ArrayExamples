#include <iostream>
#include <vector>

int getSmallestElementInArray(const std::vector<int>& myVector)
{
    int minElem = 0;
    if (myVector.empty())
    {
        std::cout << "Empty vector being passed" << std::endl;
        return -1;
    }

    minElem = myVector[0];
    for (auto x : myVector)
    {
        if (x < minElem)
        {
            minElem = x;
        }
    }
    return minElem;
}

int main()
{
    std::vector<int> myVector{ 4 ,5 ,1 ,2 ,3 };
    std::cout << "Input vector1 {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Smallest element in vector : " << getSmallestElementInArray(myVector) << std::endl;

    myVector = { 10, 20, 30, 40, 50, 5, 7 };
    std::cout << "Input vector2 {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Smallest element in vector : " << getSmallestElementInArray(myVector) << std::endl;

    return 0;
}