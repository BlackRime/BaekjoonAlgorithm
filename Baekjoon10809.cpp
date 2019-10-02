#include <iostream>
#include <string>

int main()
{
	int alpha[26];
	std::string input;
	std::fill_n(alpha, 26, -1);
	std::cin >> input;

	for (int i = 0; input[i]; ++i)
	{
		int temp = input[i] - '\0' - 97;
		if (alpha[temp] == -1)
		{
			alpha[temp] = i;
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		std::cout << alpha[i] << std::endl;
	}
}