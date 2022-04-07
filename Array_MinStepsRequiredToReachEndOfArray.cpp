#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getMinJumpsToReachArrayEnd(std::vector<int> arrElem)
{
    int steps = 0;
    int counter = 0;
    for (auto i = 0U; i < arrElem.size(); i++)
    {
        steps += arrElem.at(i);
        if (steps < arrElem.size())
        {
            counter++;
        }
        else
        {
            break;
        }
    }
    return counter;
}

int main()
{
    std::vector<int> arrElem {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << "Test Input1 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;

    cout << "Min number of jumps to reach end of array: " << getMinJumpsToReachArrayEnd(arrElem) << endl << endl;

    arrElem = { 1, 4, 3, 2, 6, 7 };
    cout << "Test Input2 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;
    cout << "Min number of jumps to reach end of array: " << getMinJumpsToReachArrayEnd(arrElem) << endl << endl;

    arrElem = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    cout << "Test Input3 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;
    cout << "Min number of jumps to reach end of array: " << getMinJumpsToReachArrayEnd(arrElem) << endl << endl;

    return 0;
}