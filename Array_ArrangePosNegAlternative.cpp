#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

std::vector<int> getSeggregatedArray(std::vector<int> arrElem)
{
    std::vector<int> posVector{};
    std::vector<int> negVector{};
    std::vector<int> seggregatedVector{};

    for (auto x : arrElem)
    {
        if (x > 0)
        {
            posVector.push_back(x); //Copy Positive elements
        }
        else if (x < 0)
        {
            negVector.push_back(x); //Copy Negative Elements
        }
    }

    //Positive numbers
    cout << "Positive vector ";
    for (auto x : posVector)
    {
        cout << x << " ";
    }
    cout << endl;

    //Negative numbers
    cout << "negative vector ";
    for (auto x : negVector)
    {
        cout << x << " ";
    }
    cout << endl;
    int j = 0, k = 0;

    //Seggregate the positive and negative elements
    for (auto i = 0U;i< arrElem.size();i++)
    {
        if (i % 2 == 0)
        {
            seggregatedVector.push_back(posVector.at(j));
            j++;
        }
        else if (i % 2 != 0)
        {
            seggregatedVector.push_back(negVector.at(k));
            k++;
        }
    }   
    return seggregatedVector;
}

int main()
{
    std::vector<int> arrElem { 11, -1, 13, -21, -3, 7 };
    cout << "Original Array {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;

    std::vector<int> seggregatedVector = getSeggregatedArray(arrElem);

    cout << "Seggregated Array {";
    for (auto x : arrElem)
    {
        cout << x << ",";
    }
    cout << "}" << endl;

    return 0;
}