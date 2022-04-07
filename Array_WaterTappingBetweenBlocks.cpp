#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getTotalTrappedWater(std::vector<int>& heightOfBlocks)
{
    //Idea is to get maximum of two numbers from array
    sort(heightOfBlocks.begin(), heightOfBlocks.end());
    cout << "Greater two numbers from blocks: " << heightOfBlocks.at(heightOfBlocks.size() - 2) <<" " << heightOfBlocks.at(heightOfBlocks.size() - 1) << endl;
    
    int secondLargestElement = heightOfBlocks.at(heightOfBlocks.size() - 2);
    int totalWaterTapped = 0;

    for (auto i = 0U; i < (heightOfBlocks.size() - 1); i++) //Skip last element
    {
        auto diff = secondLargestElement - heightOfBlocks.at(i);
        totalWaterTapped += diff;
    }

    return totalWaterTapped;
}

int main()
{
    std::vector<int> heightOfBlocks = { 3,0,0,2,0,4 };
    cout << "Input1 {";
    for (auto x : heightOfBlocks)
    {
        cout << x << " ";
    }
    cout << "}" << endl;
    std::cout << "Total Trapped water between blocks: " << getTotalTrappedWater(heightOfBlocks) << std::endl;

    heightOfBlocks = { 2, 0, 2 };
    cout << "Input2 {";
    for (auto x : heightOfBlocks)
    {
        cout << x << " ";
    }
    cout << "}" << endl;
    std::cout << "Total Trapped water between blocks: " << getTotalTrappedWater(heightOfBlocks) << std::endl;

    heightOfBlocks = { 3, 0, 2, 0, 4 };
    cout << "Input3 {";
    for (auto x : heightOfBlocks)
    {
        cout << x << " ";
    }
    cout << "}" << endl;
    std::cout << "Total Trapped water between blocks: " << getTotalTrappedWater(heightOfBlocks) << std::endl;

    heightOfBlocks = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    cout << "Input3 {";
    for (auto x : heightOfBlocks)
    {
        cout << x << " ";
    }
    cout << "}" << endl;
    std::cout << "Total Trapped water between blocks: " << getTotalTrappedWater(heightOfBlocks) << std::endl;

    return 0;
}