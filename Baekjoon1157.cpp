#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	int alpha[26] = { 0 };
	for (int i = 0; str[i]; ++i)
	{
		if (str[i] < 96)
		{
			++alpha[str[i] - '\0' - 65];
		}
		else {
			++alpha[str[i] - '\0' - 97];
		}
	}
	int maxValue(-1), maxIndex(-1);
	for (int i = 0; i < 26; ++i)
	{
		if (alpha[i] == maxValue)
		{
			maxIndex = -1;
		}
		else if (alpha[i] > maxValue)
		{
			maxValue = alpha[i];
			maxIndex = i;
		}
	}
	if (maxIndex == -1)
	{
		std::cout << "?" << std::endl;
	}
	else
	{
		std::cout << (char)(maxIndex + 65) << std::endl;
	}
}