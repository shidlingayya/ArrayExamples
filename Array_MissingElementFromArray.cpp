#include <iostream>
#include <algorithm>
#include <vector>

int getMissingElement(std::vector<int> myVector)
{
    int n = myVector.size() + 1; //Find the sum of total natural number including "missing number"
    int total_sum = (n * (n + 1)) / 2;
    int current_sum = 0;

    for (auto x : myVector)
    {
        current_sum += x;
    }

    return(total_sum - current_sum); //Missing Number
}

int main()
{
    std::vector<int> myVector{ 6,1,2,8,3,4,7,10,5 };
    
    std::cout << "{";
    for (auto x : myVector)
    {
        std::cout << x << ",";
    }
    std::cout << "}" << std::endl;

    std::cout << "Missing element in range of above array is: " << getMissingElement(myVector) << std::endl;

    return 0;
}
