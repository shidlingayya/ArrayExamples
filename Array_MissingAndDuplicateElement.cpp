#include <iostream>
#include <algorithm>
#include <vector>

int getDuplicateElement(const std::vector<int> myVector)
{
    int elem = 0;
    bool found = false;
    for (auto i = 0U;i<myVector.size();i++)
    {
        elem = myVector.at(i);
        for (auto j = 0U; j < myVector.size(); j++)
        {
            if (elem == myVector.at(j))
            {
                found = true;
            }
        }
        if (found)
        {
            break;
        }
    }

    return elem;
}

int getMissingElement(const std::vector<int> myVector)
{
    int n = myVector.size() + 1;
    int total_sum = (n * (n + 1)) / 2;
    int current_sum = 0;
    for (auto x:myVector)
    {
        current_sum += x;
    }
    return (total_sum - current_sum);
}

int main()
{
    std::vector<int> myVector{2, 2};
    std::cout << "Input vector1 {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Duplicate element : " << getDuplicateElement(myVector) << std::endl;

    //Remove duplicates from Array to find missing element
    auto ip = std::unique(myVector.begin(), myVector.begin()+2);
    myVector.resize(std::distance(myVector.begin(), ip));

    std::cout << "Unique elements in vector {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;
    std::cout << "Missing element : " << getMissingElement(myVector) << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;

    myVector = { 1, 3, 3 };
    std::cout << "Input vector2 {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Duplicate element : " << getDuplicateElement(myVector) << std::endl;

    //Remove duplicates from Array to find missing element
    ip = std::unique(myVector.begin(), myVector.begin() + 2);
    myVector.resize(std::distance(myVector.begin(), ip));

    std::cout << "Unique elements in vector {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;
    std::cout << "Missing element : " << getMissingElement(myVector) << std::endl;

    return 0;
}