#include <iostream>
#include <algorithm>
#include <vector>

void rotateVectorByNumber(std::vector<int>& myVector, int noOfTimesRotate)
{
    if (myVector.empty())
    {
        std::cout << "Empty Vector being passed" << std::endl;
        return;
    }

    for (int i = 0; i < myVector.size(); i++)
    {
        myVector.push_back(myVector.at(0));
        myVector.erase(myVector.begin());

        if (i == (noOfTimesRotate - 1))
        {
            break;
        }
    }
}

int main()
{
    std::vector<int> myVector1{ 10, 4, 11, -30, 25, 6 };
    
    std::cout << "{";
    for (auto x : myVector1)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Rotate Array by 1" << std::endl;
    rotateVectorByNumber(myVector1, 1);

    std::cout << "{";
    for (auto x : myVector1)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Rotate Array by 3" << std::endl;
    rotateVectorByNumber(myVector1, 3);

    std::cout << "{";
    for (auto x : myVector1)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    return 0;
}
