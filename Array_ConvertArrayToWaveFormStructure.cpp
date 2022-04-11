#include <iostream>
#include <algorithm>
#include <vector>

void convertToWave(std::vector<int>& arr) 
{
    auto n = arr.size();
    if ((n % 2) != 0) //If odd number then no impact to last element, Exclude it from swap
    {
        n--;
    }

    //After increment do not touch first 3 element, Hence increment to 2 once
    for (int i = 0; i < n; i = i + 2) 
    {
        std::swap(arr[i], arr[i + 1]); 
    }
}

int main()
{
    std::vector<int> myVector{1, 5, 11, 5};
    std::cout << "Input vector1 {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    convertToWave(myVector);
    std::cout << "1 -- Vector converted to waveform {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    myVector = { 2,4,7,8,9,10 };
    std::cout << "Input vector2 {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    convertToWave(myVector);
    std::cout << "Vector converted to waveform {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;
    return 0;
}