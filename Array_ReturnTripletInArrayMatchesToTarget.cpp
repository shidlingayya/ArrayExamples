#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

std::vector<int> getTripletWithTargetSum(std::vector<int>& myNumbers, int target)
{
    std::vector<int> triplet{};
    bool found = false;
    for (auto i = 0U; i < myNumbers.size(); i++)
    {
        for (auto j = 0U; j < myNumbers.size(); j++)
        {
            for (auto k = 0U; k < myNumbers.size(); k++)
            {
                if (myNumbers.at(i) + myNumbers.at(j) + myNumbers.at(k) == target)
                {
                    triplet.push_back(myNumbers.at(i));
                    triplet.push_back(myNumbers.at(j));
                    triplet.push_back(myNumbers.at(k));
                    found = true;
                }
            }
            if (found)
            {
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    return triplet;
}

int main()
{
    std::vector<int> myNumbers{ 1, 4, 45, 6, 10, 8 };
    cout << "****** Original Array ==> {";
    for (auto x : myNumbers)
    {
        cout << x << " ";
    }
    cout << "}" << endl;

    int target = 13;
    std::vector<int> triplet = getTripletWithTargetSum(myNumbers, target);

    cout << "****** triplet for target sum "<< target <<" are ==> {";
    for (auto x : triplet)
    {
        cout << x << " ";
    }
    cout << "}" << endl;

    return 0;
}