#include <iostream>
#include <algorithm>
#include <vector>

/*HackerRank == 
Two friends Anna and Brian, are deciding how to split the bill at a dinner. 
Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. 
You must determine if his calculation is correct.
*/

void bonAppetit(std::vector<int> arr, int index, int target)
{
    int sum = 0;
    for (auto i = 0U; i < arr.size(); i++)
    {
        if (i != index)
        {
            sum += arr[i];
        }
    }
    
    int split = sum / 2;

    if (target == split)
    {
        std::cout << "Bon Appetit" << std::endl;
    }
    else if (target - split > 0)
    {
        std::cout << (target - split) << std::endl;
    }
}

int main()
{
    std::vector<int> arr = { 3, 10, 2, 9 };
    bonAppetit(arr, 1, 7);

    arr = { 3, 10, 2, 9 };
    bonAppetit(arr, 1, 12);
    return 0;
}