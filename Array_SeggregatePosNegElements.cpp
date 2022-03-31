#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> getSubArrayWithGivenSum(std::vector<int> myVector)
{
    std::vector<int> segregatedVector;
    for (auto x : myVector){
        if (x > 0){
            segregatedVector.push_back(x);
        }
    }
    for (auto x : myVector){
        if (x < 0){
            segregatedVector.push_back(x);
        }
    }
    return segregatedVector;
}

int main()
{
    std::vector<int> myVector{ 10, 4, -11, -30, 25 };
    std::vector<int> segregatedVector = getSubArrayWithGivenSum(myVector);
    std::cout << "Segregated vector:" << std::endl;
    for (auto x : segregatedVector)
    {
        std::cout << x << " ";
    }
    return 0;
}
