#include <iostream>
#include <vector>

int countOccuranceOfDigit(std::vector<int> myInts, int value)
{
    int counter = 0;
    for (auto x : myInts)
    {
        if (x == value)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    std::vector<int> myVector{ 1, 4, 2, 4, 5 };

    std::cout << "{";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;   

    std::cout << "4 is repeated: #" << countOccuranceOfDigit(myVector, 4) << " number of times" << std::endl;

    return 0;
}
