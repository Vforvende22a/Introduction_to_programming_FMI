#include <iostream>
#include <algorithm>
#include <climits>

unsigned int getMinimumOperations(unsigned int n)
{
	unsigned int* minOperations = new unsigned int[n + 1];
	for (size_t i = 0; i < n + 1; i++)
	{
		minOperations[i] = UINT_MAX;
	}

	minOperations[1] = 0;
	minOperations[2] = 1;
	minOperations[3] = 1;

	for (unsigned int i = 4; i <= n; i++)
	{
		unsigned int v1 = UINT_MAX;
		unsigned int v2 = UINT_MAX;
		unsigned int v3 = UINT_MAX;

		if (i % 3 == 0)
		{
			v1 = minOperations[i / 3];
		}
		if (i % 2 == 0)
		{
			v2 = minOperations[i / 2];
		}
		v3 = minOperations[i - 1];

		minOperations[i] = 1 + std::min({ v1, v2, v3 });
	}

	return minOperations[n];
}

int main()
{
	std::cout << "The minimum number of operations is " << getMinimumOperations(962340) << std::endl;
}