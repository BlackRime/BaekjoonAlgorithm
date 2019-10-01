#include <iostream>
#include <string>

int main()
{
	int dial[26] =
	{
		2, 2, 2, 3, 3, 3,
		4, 4, 4, 5, 5, 5,
		6, 6, 6, 7, 7, 7, 7,
		8, 8, 8, 9, 9, 9, 9
	};
	int sum(0);
	std::string tel;
	std::cin >> tel;

	for (int i = 0; tel[i]; ++i)
	{
		sum += dial[tel[i] - 'A'] + 1;
	}
	std::cout << sum;
}