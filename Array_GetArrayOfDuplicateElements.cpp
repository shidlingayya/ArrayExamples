#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> getDuplicates(std::vector<int> myVector)
{
    std::vector<int> duplicates{};
    for (auto i = 0; i < myVector.size(); i++)
    {
        for (auto j = i+1; j < myVector.size(); j++)
        {
            if (myVector.at(i) == myVector.at(j))
            {
                duplicates.push_back(myVector.at(i));
            }
        }
    }
    return duplicates;
}

int main()
{
    std::vector<int> myVector {2,3,1,2,3};
    
    std::cout << "{";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::vector<int> duplicates = getDuplicates(myVector);

    std::cout << "Duplicate elements {";
    for (auto x : duplicates)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    return 0;
}
