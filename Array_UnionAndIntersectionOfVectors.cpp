#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> getIntersectionOfVector(const std::vector<int>& myVector1, const std::vector<int> myVector2)
{
    std::vector<int> interSectionOfVector{};
    for (auto x : myVector1)
    {
        for (auto y : myVector2)
        {
            if (x == y)
            {
                interSectionOfVector.push_back(x);
            }
        }
    }
    return interSectionOfVector;
}

std::vector<int> getUnionFromVectors(std::vector<int>& myVector1, std::vector<int> myVector2)
{
    for (auto x : myVector2)
    {
        myVector1.push_back(x);
    }
    auto it = std::unique(myVector1.begin(), myVector1.begin()+myVector1.size());
    return myVector1;
}

int main()
{
    std::vector<int> myVector1{ 10, 4, 11, -30, 25, 6 };
    std::vector<int> myVector2{ 11, 2, 14, 3, 25, 6 };

    std::cout << "myVector1: " << "{";
    for (auto x : myVector1)
    {
        std::cout << x << ",";
    }
    std::cout <<"}"<<std::endl;

    std::cout << "myVector2: " << "{";
    for (auto x : myVector2)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;
    
    //Intersection of myVector1 and myVector2 -- {11, 25}
    std::vector<int> commonElementsFromTwoVectors = getIntersectionOfVector(myVector1, myVector2);

    std::cout << "commonElementsFromTwoVectors: " << "{";
    for (auto x : commonElementsFromTwoVectors)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    //Union of myVector1 and myVector2 -- {-30, 2, 3, 4, 10, 11, 14, 25}
    std::vector<int> unionFromTwoVectors = getUnionFromVectors(myVector1, myVector2);

    std::cout << "unionFromTwoVectors: " << "{";
    for (auto x : unionFromTwoVectors)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    return 0;
}
