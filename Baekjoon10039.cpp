#include <iostream>

int main()
{
	int score[5], sum(0);
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> score[i];
		if (score[i] < 40) 
		{
			sum += 40;
		}
		else 
		{
			sum += score[i];
		}
	}
	std::cout << sum / 5 << std::endl;
}