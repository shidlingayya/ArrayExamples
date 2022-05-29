#include <iostream>
#include <vector>
#include <algorithm>

int getIndexOfNumber(std::vector<int> myVect, int num)
{
 	auto index = find(myVect.begin(), myVect.end(), num);
	int elementIndex = 0;
	if (index != myVect.end())
	{
		elementIndex = index - myVect.begin();
	}
	return elementIndex;
}

int main() 
{
	std::vector<int> myVect{ 1, 4, 5, 7, 9, 12 };
	std::cout << "Index of 4 is: " << getIndexOfNumber(myVect, 4) << std::endl;
	return 0;
}
