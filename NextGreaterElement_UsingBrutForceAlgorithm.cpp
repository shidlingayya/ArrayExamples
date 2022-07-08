#include <iostream>
#include <vector>

std::vector<int> getNGE(std::vector<int>& myArr)
{
    std::vector<int> arr{};
    for (auto i = 0; i < myArr.size(); i++)
    {
        bool flag = false;
        for (auto j = i+1; j < myArr.size(); j++)
        {
            if (myArr[i] < myArr[j])
            {
                arr.push_back(myArr[j]);
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            arr.push_back(-1);
        }
    }

    return arr;
}

int main()
{ 
    std::vector<int> myArr{ 11, 13, 21, 3 };
    std::vector<int> getNextGreaterElements = getNGE(myArr);
    for (auto x : getNextGreaterElements)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}