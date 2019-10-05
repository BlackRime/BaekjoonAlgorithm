#include <iostream>
#include <string>

int main()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;

	for (int i = 2; i > -1; --i)
	{
		if (str1[i] < str2[i])
		{
			std::cout << str2[2] << str2[1] << str2[0];
			break;
		}
		else if (str1[i] > str2[i])
		{
			std::cout << str1[2] << str1[1] << str1[0];
			break;
		}
	}
}