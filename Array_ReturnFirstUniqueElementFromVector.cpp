#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getFirstNonRepeatingElement(const std::vector<int>& myNumbers)
{
    std::vector<int> countOfEachElement{};
    int firstUniqueElement = 0;
    for (auto i = 0U; i < myNumbers.size(); i++)
    {
        //Count occurance of each element from vector and store in another vector
        countOfEachElement.push_back(std::count(myNumbers.begin(), myNumbers.end(), myNumbers.at(i)));
    }

    for (auto i = 0U; i < myNumbers.size(); i++)
    {
        //The non-repeated character at least should be counter 1
        if (countOfEachElement.at(i) == 1)
        {
            firstUniqueElement = myNumbers.at(i);
            break;
        }
    }

    return firstUniqueElement;
}

int main()
{
    std::vector<int> myNumbers{5, 5, 6, 6, 3, 3, 1, 10, 10, 11, 11};
    cout << "****** Original Array ==> {";
    for (auto x : myNumbers)
    {
        cout << x << " ";
    }
    cout << "}" << endl;

    cout << "First repeating element in array: " << getFirstNonRepeatingElement(myNumbers) << endl;

    return 0;
}