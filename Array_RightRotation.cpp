#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int arr_size = a.size();
    while (k > arr_size)
    {
        k = k - arr_size;
    }

    std::vector<int> new_array;
    for (auto i = arr_size - k; i < arr_size; ++i)
    {
        new_array.push_back(a[i]);
    }
    for (auto i = 0; i < arr_size - k; ++i)
    {
        new_array.push_back(a[i]);
    }

    std::vector<int> res;
    for (int i = 0; i < queries.size(); ++i)
    {
        int idx = queries[i];
        int val = new_array[idx];
        res.push_back(val);
    }
    return res;
}

int main()
{
    std::vector<int> myVect{ 3, 4, 5 };
    std::vector<int> queries{ 1, 2 };
    std::vector<int> arrElem = circularArrayRotation(myVect, 2, queries);

    for (auto x : arrElem)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myVect = { 1, 2, 3 };
    queries = { 0, 1, 2};
    arrElem = circularArrayRotation(myVect, 2, queries);
    for (auto x : arrElem)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}