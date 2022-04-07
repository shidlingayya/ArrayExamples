#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void getIndexWithZeroSum(const vector<int>& myNumbers)
{
    int sum = 0;
    std::vector<int> indexes{};
    for (auto i = 0U; i < myNumbers.size(); i++)
    {
        for (auto j = i; j < myNumbers.size(); j++)
        {
            sum += myNumbers[j];

            if (sum == 0)
            {
                std::cout << "Index with 0 sum are: " << i << " to " << j << std::endl;
            }
        }
    }
}


int main()
{
    std::vector<int> myNumbers = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
                                            
    cout << "****** Original Array ==> "<< endl; 
    cout << "{";
    for (auto x : myNumbers)
    {
            std::cout << x << " ";
    }
    std::cout << "}" << std::endl;

    getIndexWithZeroSum(myNumbers);

    return 0;
}