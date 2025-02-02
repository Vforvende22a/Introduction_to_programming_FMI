#include <iostream>
#include <cmath>
using namespace std;

void lowerToUpperCase(char* str)
{
	if (str == nullptr)
	{
		return;
	}

	unsigned short diffBetweenCapitalAndSmallLetters = abs('A' - 'a');
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= diffBetweenCapitalAndSmallLetters;
		}
		str++;
	}
}

int main()
{
	const int MAX_SIZE = 64;

	char str[MAX_SIZE];
	cin.getline(str, MAX_SIZE);

	lowerToUpperCase(str);
	cout << str;
}