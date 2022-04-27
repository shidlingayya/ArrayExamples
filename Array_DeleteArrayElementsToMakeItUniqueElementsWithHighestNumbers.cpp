#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int equalizeArray(std::vector<int> arr)
{
	std::map<char, int> counts;
	std::vector<int> elems;
	for (auto i = 0U; i < arr.size(); i++)
	{
		counts[arr.at(i)]++;
	}

	//Count with highest value needs to be retained
	int max = 0;
	int value = 0;
	for (auto x : counts)
	{
		if (x.second > max)
		{
			max = x.second;
			value = x.first;
		}
	}

	//The number of deletions nothing but all character occurance except above value
	int deletions = 0;
	for (auto x : counts)
	{
		if (x.first != value)
		{
			deletions += x.second;
		}
	}

	return deletions;
}

int main()
{
	std::vector<int> myVect{ 1, 2, 2, 3 };
	std::cout << "Get number of deletion keep array unique: " << equalizeArray(myVect) << std::endl;

	myVect = { 3, 3, 2, 1, 3 };
	std::cout << "Get number of deletion keep array unique: " << equalizeArray(myVect) << std::endl;

	myVect = { 1, 2, 3, 1, 2, 3, 3, 3 };
	std::cout << "Get number of deletion keep array unique: " << equalizeArray(myVect) << std::endl;

	return 0;
}