#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	int count = str.length();
	for(int i = 0; i < count - 1; ++i)
	{
		for(int j = i + 1; j < count; ++j)
		{
			if(str[i] < str[j])
			{
				std::swap(str[i], str[j]);
			}
		}
	}
	std::cout << str;
}
