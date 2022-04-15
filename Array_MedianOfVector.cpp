#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int getMedian(std::vector<int> integers)
{
    std::sort(integers.begin(), integers.end());
    return integers.at(integers.size() / 2);
}

int main()
{    
    std::vector<int> myVector{5, 3, 1, 2, 4};
    std::cout << "Get the median of vector: " << getMedian(myVector) << std::endl;
    return 0;
}

