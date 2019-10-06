#include <iostream>
#include <assert.h>

int main()
{
	int scale[8], asec(-1);

	for (int i = 0; i < 8; ++i)
	{
		std::cin >> scale[i];
	}

	if (scale[0] - scale[1] < 0) 
	{
		asec = 1;
	}
	else 
	{
		asec = 0;
	}

	for (int i = 1; i < 7; ++i)
	{
		if (scale[i] - scale[i + 1] < 0 && asec == 1) 
		{
			asec = 1;
		}
		else if(scale[i] - scale[i + 1] > 0 && asec == 0)
		{
			asec = 0;
		}
		else 
		{
			asec = -1;
			break;
		}
	}

	switch (asec) {
	case 1: std::cout << "ascending" << std::endl; break;
	case 0: std::cout << "descending" << std::endl; break;
	case -1: std::cout << "mixed" << std::endl; break;
	default:
		assert("asec is wrong"); break;
	}
}