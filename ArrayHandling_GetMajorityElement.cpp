#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getMajorityOfArray(std::vector<int> arrElem)
{
    int counter = 0;
    int majorElement = 0;
    int targetCount = (arrElem.size() / 2) + 1; //+1 to round of element to next integer
    cout << "Array size: " << arrElem.size() << " targetCount: " << targetCount << endl;
    for (auto i = 0U; i < arrElem.size(); i++)
    {
        for (auto j = 0U; j < arrElem.size(); j++)
        {
            if (arrElem.at(i) == arrElem.at(j))
            {
                counter++;
                majorElement = arrElem.at(i);
            }
        }
        
        if (counter >= targetCount)
        {
            cout << "Element " << majorElement << "is repeated " << counter << "number of times " << endl;
            break;
        }
        else
        {
            majorElement = -1; //If not found keep -1 for error
        }
        counter = 0;
    }
    return majorElement;
}

int main()
{
    std::vector<int> arrElem { 1,2,3 };
    cout << "Test Input1 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;

    cout << "Majority of the array is : " << getMajorityOfArray(arrElem) << endl << endl;

    arrElem = {3,1,3,3,2};
    cout << "Test Input2 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;
    cout << "Majority of the array is : " << getMajorityOfArray(arrElem) << endl << endl;

    arrElem = { 3, 3, 4, 2, 4, 4, 2, 4, 4 };
    cout << "Test Input3 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;
    cout << "Majority of the array is : " << getMajorityOfArray(arrElem) << endl << endl;

    return 0;
}