#include <iostream>
#include <string>

int main()
{
	int testcase;
	std::cin >> testcase;

	while (testcase--)
	{
		int sum(0), add(1);
		std::string str;

		std::cin >> str;

		for (int i = 0; str[i]; ++i) 
		{
			if (str[i] == 'O') 
			{
				sum += add++;
			}
			else
			{
				add = 1;
			}
		}
		std::cout << sum << std::endl;
	}
}