#include <iostream>
#include <algorithm>
#include <vector>

int max_sum(std::vector<int>& arr)
{
    int max_sum = 0;

    //Store first configuration data
    for (auto i = 0; i < arr.size(); i++) //{8,3,1,2}
    {
        max_sum += (i * arr.at(i)); //8*0 + 3 * 1 + 1 * 2 + 2 *3 ==> 11
    }

    int sum = 0;
    for (auto i = 0; i < arr.size()-1; i++)
    {
        arr.push_back(arr.at(0)); //First time --> 8, 3, 1, 2, 8, second time --> 3, 1, 2 8, 3
        arr.erase(arr.begin()); // First time --> 3, 1, 2, 8 second time --> 1, 2, 8, 3

        sum = 0;
        for (auto j = 0; j < arr.size(); j++)
        {
            sum += (j * arr.at(j));  //3 * 0 + 1 * 1 + 2 * 2 + 8 * 3 ==> 29
        }

        if (sum > max_sum) //29 > 11
        {
            max_sum = sum; //29
        }
    }

    return max_sum;
}

int main()
{
    std::vector<int> myVector{8,3,1,2};
    std::cout << "Input vector1 {";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;
    std::cout << "Maximum sum of array given configuration: " << max_sum(myVector) << std::endl;

    return 0;
}