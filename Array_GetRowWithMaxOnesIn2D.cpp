#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getRowWithMaxOnes(std::vector<std::vector<int>>& myNumbers)
{
    int rowWithMaxOnes = -1;
    auto countOnesInRow = 0;

    for (auto i = 0U; i < 3; i++)
    {
        countOnesInRow = 0;
        for (auto x : myNumbers[i])
        {
            if (x == 1)
            {
                countOnesInRow++;
            }
        }

        if (countOnesInRow > rowWithMaxOnes)
        {
            rowWithMaxOnes = i;
        }
    }

    return rowWithMaxOnes;
}

int main()
{
    std::vector<std::vector<int>> myNumbers{ {1, 1, 0, 0},
                                             {1, 1, 1, 1},
                                             {2, 3, 1, 1}
                                           };
    cout << "****** Original Array ==> "<< endl; 
    cout << "{";
    for (auto i = 0U; i < 3; i++)
    {
        for (auto x : myNumbers[i])
        {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "}" << std::endl;

    std::cout << "Row number where maximum 1's present: " << getRowWithMaxOnes(myNumbers) << std::endl;

    return 0;
}