#include <iostream>

int main()
{
	int count(0);
	char word[102];
	std::cin >> word;

	for (int i = 0; i < 102 - 3; ++i)
	{
		if (word[i] == 'd')
		{
			if (word[i + 1] == 'z')
			{
				if (word[i + 2] == '=')
				{
					word[i] = 'z';
					word[i + 1] = '=';
					word[i + 2] = ' ';
				}
			}
		}
	}
	for (int i = 0; i < 101; ++i)
	{
		if (word[i] == 'c')
		{
			if (word[i + 1] == '=' || word[i + 1] == '-')
			{
				++i;
			}
		}
		else if (word[i] == 'd')
		{
			if (word[i + 1] == '-')
			{
				++i;
			}
		}
		else if(word[i + 1] == 'j')
		{
			if (word[i] == 'l' || word[i] == 'n')
			{
				++i;
			}
		}
		else if (word[i + 1] == '=')
		{
			if (word[i] == 's' || word[i] == 'z')
			{
				++i;
			}
		}
		if(word[i] == '=' || word[i] == '-' || 'a' <= word[i] && word[i] <= 'z')
		{
			++count;
		}
	}
	std::cout << count;
}