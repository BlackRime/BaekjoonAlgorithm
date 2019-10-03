#include <iostream>
#include <string>

int main()
{
	int testcase, count(0);
	std::string str;
	std::cin >> testcase;
	while (testcase--)
	{
		std::cin >> str;
		bool alpha[27] = { 0 };

		for (int i = 0; str[i]; ++i)
		{
			if (str[i] == str[i + 1])
			{
				continue;
			}
			int temp = str[i] - '\0' - 97;
			if (alpha[temp] == 0)
			{
				alpha[temp] = 1;
			}
			else
			{
				alpha[26] = -1;
				break;
			}
		}
		if (alpha[26] == 0)
		{
			++count;
		}
	}
	std::cout << count;
}