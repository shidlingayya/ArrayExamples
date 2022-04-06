#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getFirstRepeatingElement(const std::vector<int>& myNumbers)
{
    int nonRepeatElement = 0;
    int foundElement = 0;
    for (auto i = 0U; i < myNumbers.size(); i++)
    {
        for (auto j = i + 1U; j < myNumbers.size(); j++)
        {
            if (myNumbers.at(i) == myNumbers.at(j))
            {
                nonRepeatElement = myNumbers.at(j);
                foundElement = 1;
            }
        }
        if (foundElement) //Exit from both the loops, C/C++ doesn't support exiting from multiple loops at once, usually flag used
        {
            break;
        }
    }
    return nonRepeatElement;
}

int main()
{
    std::vector<int> myNumbers{5, 6, 3, 3, 1, 10, 10, 11, 11};
    cout << "****** Original Array ==> {";
    for (auto x : myNumbers)
    {
        cout << x << " ";
    }
    cout << "}" << endl;

    cout << "First repeating element in array: " << getFirstRepeatingElement(myNumbers) << endl;

    return 0;
}