#include <iostream>
#include <vector>
#include <algorithm>

long arrayManipulation(int n, std::vector<std::vector<int>> queries)
{
	std::vector<int> myArray(n+1);
	for (auto i = 0; i < queries.size(); i++)
	{
		int startIndex = queries[i][0];
		int endIndex = queries[i][1];
		int k = queries[i][2];

		for (auto j = startIndex; j < endIndex+1; j++)
		{
			myArray[j] += k;
		}
	}
	
	std::sort(myArray.begin(), myArray.end(), std::greater<int>());

	return myArray[0];
}

int main()
{
	std::vector<std::vector<int>> quaries = { {1,2,100}, {2,5,100}, {3, 4, 100 } };
	std::cout << "Maximum value: " << arrayManipulation(5, quaries) << std::endl;

	quaries = { {1,5,3}, {4, 8, 7}, {6, 9, 1} };
	std::cout << "Maximum value: " << arrayManipulation(10, quaries) << std::endl;

	return 0;
}
