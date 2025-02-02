#include <iostream>
using namespace std;

int linearSearch(const int arr[], size_t len, int element)
{
	for (size_t i = 0; i < len; i++)
	{
		if (arr[i] == element)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	const size_t ARR_SIZE = 5;
	int arr[ARR_SIZE] = { 5, 4, 3, 2, 1 };

	cout << (linearSearch(arr, ARR_SIZE, 2) >= 0) ? true : false;
}