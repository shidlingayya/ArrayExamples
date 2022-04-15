#include <iostream>
#include <map>
#include <vector>

int getUnique(std::vector<int> integers)
{
    std::map<int, int> myMap{};
    for (auto i = 0U; i < integers.size(); i++)
    {
        myMap[integers.at(i)]++;
    }

    int unique_element = 0;
    for (auto x : myMap)
    {
        if (x.second == 1)
        {
            unique_element = x.first;
        }
    }
    
    return unique_element;
}

int main()
{    
    std::vector<int> myVector{1, 2, 3, 4, 3, 2, 1};
    std::cout << "Unique Element is: " << getUnique(myVector) << std::endl;
    return 0;
}

