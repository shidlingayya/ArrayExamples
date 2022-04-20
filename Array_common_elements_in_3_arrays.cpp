#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::vector<int> getCommonElements(std::vector<int> v1, std::vector<int> v2, std::vector<int> v3)
{
    std::map<int, int> myMap;
    std::vector<int> commElements{};
    for (auto i = 0U; i < v1.size(); i++)
    {
        myMap[v1.at(i)]++;
    }

    for (auto i = 0U; i < v2.size(); i++)
    {
        myMap[v2.at(i)]++;
    }

    for (auto i = 0U; i < v3.size(); i++)
    {
        myMap[v3.at(i)]++;
    }

    for (auto x : myMap)
    {
        if (x.second == 3)
        {
            commElements.push_back(x.first);
        }
    }

    return commElements;
}

int main()
{ 
    std::vector<int> A{ 1, 5, 10, 20, 40, 80 };
    std::vector<int> B{ 6, 7, 20, 80, 100 };
    std::vector<int> C = { 3, 4, 15, 20, 30, 70, 80, 120 };

    std::vector<int> commElem = getCommonElements(A, B, C);

    std::cout << "Common elements among 3 arrays" << std::endl;
    for (auto x : commElem)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}