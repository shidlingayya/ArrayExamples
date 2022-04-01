#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> getInterSectionOfThreeArrays(std::vector<int>& myVector1, std::vector<int>& myVector2, std::vector<int>& myVector3)
{
    std::vector<int> interSectionOfThreeVectors {};
    std::vector<int> temp{};
    for (auto i = 0; i < myVector1.size(); i++)
    {
        for (auto j = 0; j < myVector2.size(); j++)
        {
            if (myVector1.at(i) == myVector2.at(j))
            {
                temp.push_back(myVector1.at(i));
            }
        }
    }

    for (auto i = 0; i < myVector3.size(); i++)
    {
        for (auto j = 0; j < temp.size(); j++)
        {
            if (myVector3.at(i) == temp.at(j))
            {
                interSectionOfThreeVectors.push_back(myVector3.at(i));
            }
        }
    }

    return interSectionOfThreeVectors;
}

int main()
{
    std::vector<int> myVector1{ 1, 5, 10, 20, 40, 80};
    std::vector<int> myVector2{ 6, 7, 20, 80, 100 };
    std::vector<int> myVector3 { 3, 4, 15, 20, 30, 70, 80, 120 };
    
    std::cout << "{";
    for (auto x : myVector1)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "{";
    for (auto x : myVector2)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "{";
    for (auto x : myVector3)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::vector<int> commonElements = getInterSectionOfThreeArrays(myVector1, myVector2, myVector3);

    std::cout << "Common elements {";
    for (auto x : commonElements)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    return 0;
}
