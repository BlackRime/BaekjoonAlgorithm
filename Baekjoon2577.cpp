#include <iostream>
#include <string>

int main()
{
	int mulFir, mulSec, mulThi;

	std::cin >> mulFir >> mulSec >> mulThi;

	int mulResult = mulFir * mulSec * mulThi;
	int output[10] = { 0 };

	std::string str = std::to_string(mulResult);
	for (int i = 0; str[i]; ++i) 
	{
		++output[str[i] - '0'];
	}
	for (int i = 0; i < 10; ++i) 
	{
		std::cout << output[i] << std::endl;
	}
}