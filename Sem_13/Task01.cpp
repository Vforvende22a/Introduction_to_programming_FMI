#include <iostream>
using namespace std;

bool isPrefix(const char* text, const char* pattern)
{
	if (*pattern == '\0')
	{
		return true;
	}

	return *text == *pattern && isPrefix(text + 1, pattern + 1);
}
bool searchInText(const char* text, const char* pattern)
{
	if (*text == '\0')
	{
		return *pattern == '\0';
	}

	return isPrefix(text, pattern) || searchInText(text + 1, pattern);
}

int main()
{
	char str[] = "There is thunderstorm!";
	char pattern[] = "storm!";

	std::cout << searchInText(str, pattern);
}