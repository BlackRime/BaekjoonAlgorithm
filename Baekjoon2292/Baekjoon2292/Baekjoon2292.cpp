#include <iostream>

int main()
{
	int input, increase(6), count(1);
	std::cin >> input;
	input -= 1;
	while (input > 0)
	{
		input -= increase;
		increase += 6;
		++count;
	}
	std::cout << count << std::endl;
}