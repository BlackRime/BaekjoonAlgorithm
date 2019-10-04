#include <iostream>

int main()
{
	int count;
	int* num;
	std::cin >> count;

	num = new int[count];
	for (int i = 0; i < count; ++i)
	{
		std::cin >> num[i];
	}
	for (int i = 0; i < count - 1; ++i)
	{
		for (int j = i + 1; j < count; ++j)
		{
			if (num[i] > num[j])
			{
				std::swap(num[i], num[j]);
			}
		}
	}
	for (int i = 0; i < count; ++i)
	{
		std::cout << num[i] << std::endl;
	}
}