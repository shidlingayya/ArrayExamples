#include <iostream>
#include <vector>

std::vector<int> subarraySum(std::vector<int>& myArr, long long target)
{
    std::vector<int> subArray{};
    for (auto i = 0; i < myArr.size(); i++)
    {
        int sum = 0;
        int flag = false;
        for (auto j = i; j < myArr.size(); j++)
        {
            sum += myArr[j];
            if (sum == target)
            {
                subArray.push_back(i+1);
                subArray.push_back(j+1);
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    return subArray;
}

int main()
{ 
    std::vector<int> myArr{ 1, 2, 3, 7, 5 };
    std::vector<int> getIndex = subarraySum(myArr, 12);
    for (auto x : getIndex)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myArr = { 1,2,3,4,5,6,7,8,9,10 };
    getIndex = subarraySum(myArr, 15);
    for (auto x : getIndex)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}