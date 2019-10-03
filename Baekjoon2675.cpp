#include <iostream>
#include <string>
int main()
{
	int testcase;
	std::cin >> testcase;

	while (testcase--)
	{
		int repeat;
		std::string str;
		std::cin >> repeat >> str;
		for (int i = 0; str[i]; ++i) 
		{
			for (int j = 0; j < repeat; ++j)
			{
				std::cout << str[i];
			}
		}
		std::cout << std::endl;
	}
}