#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

/*
The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array 
(max_ending_here is used for this). And keep track of maximum sum contiguous segment among all 
positive segments (max_so_far is used for this)
*/

int getMaxSumOfSubArray(std::vector<int> v1)
{
    int max_sum = INT_MIN;
    int index_reached = 0;

    for (auto i = 0U; i < v1.size(); i++)
    {
        index_reached += v1[i];

        //We got maximum sum?
        if (index_reached > max_sum)
        {
            max_sum = index_reached;
        }

        //Negative value?
        if (index_reached < 0)
        {
            index_reached = 0;
        }
    }

    return max_sum;
}

int main()
{ 
    std::vector<int> MyArray{ 1, 2, 3, -2, 5 };
    std::cout << "Max Sum of sub-array: " << getMaxSumOfSubArray(MyArray) << std::endl;
    return 0;
}