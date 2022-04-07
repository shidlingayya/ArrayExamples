#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getMaxMinDifferenceOfTower(std::vector<int> arrElem, int target)
{
    int sum = 0;
    for (auto i = 0U; i < arrElem.size(); i++)
    {
        if ((arrElem.at(i) - target) <= 0)
        {
            arrElem.at(i) = arrElem.at(i) + target;
        }
        else
        {
            arrElem.at(i) = arrElem.at(i) - target;
        }
    }

    cout << "Modified array after modification using target {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;

    //Sort to read min/max elements
    sort(arrElem.begin(), arrElem.end());

    cout << "Maximum Tower Height: " << arrElem.at(arrElem.size()-1) << endl;
    cout << "Minimum Tower Height: " << arrElem.at(0) << endl;

    return (abs(arrElem.at(0) - arrElem.at(arrElem.size()-1)));
}

int main()
{
    std::vector<int> arrElem{ 3, 9, 12, 16, 20 };
    cout << "Test Input1 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;

    auto target = 5;
    cout << "Max/Min difference of tower: " << getMaxMinDifferenceOfTower(arrElem, target);
    cout << endl<<endl;

    arrElem = { 1, 15, 10 };
    cout << "Test Input2 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;
    target = 6;
    cout << "Max/Min difference of tower: " << getMaxMinDifferenceOfTower(arrElem, target);
    cout << endl << endl;

    arrElem = { 1, 5, 15, 10 };
    cout << "Test Input3 {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;
    target = 3;
    cout << "Max/Min difference of tower: " << getMaxMinDifferenceOfTower(arrElem, target);

    return 0;
}