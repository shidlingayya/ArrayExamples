#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool CheckIfSubArrayIsPartOfMainArray(const vector<int>& mainArray, const vector<int> subArray)
{
    uint8_t count = 0U;
    for (auto i = 0U; i < subArray.size(); i++)
    {
        for (auto j = 0U; j < mainArray.size(); j++)
        {
            if (subArray.at(i) == mainArray.at(j))
            {
                count++; 
            }
        }
    }

    //At end of computation - count will be equal to subArray if all elements are present
    return((count == subArray.size()) ? true : false);
}


int main()
{
    std::vector<int> mainArray = { 11, 1, 13, 21, 3, 7 };
    std::vector<int> subArray = { 11, 3, 7, 1, 10 };
                                            
    cout << "****** Main Array ==> ";
    cout << "{";
    for (auto x : mainArray)
    {
            std::cout << x << " ";
    }
    std::cout << "}" << std::endl;

    cout << "****** subArray Array ==> ";
    cout << "{";
    for (auto x : subArray)
    {
        std::cout << x << " ";
    }
    std::cout << "}" << std::endl;

    if (CheckIfSubArrayIsPartOfMainArray(mainArray, subArray))
    {
        cout << "Sub Array is part of Main Array" << endl;
    }
    else
    {
        cout << "Sub Array is not part of Main Array" << endl;
    }

    return 0;
}