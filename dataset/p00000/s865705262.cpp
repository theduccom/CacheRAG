#include <cstdio>

int main()
{
	for (unsigned int i = 1; i <= 9; i++)
	{
		for (unsigned int j = 1; j <= 9; j++)
		{
			std::printf("%ux%u=%u\n", i, j, i * j);
		}
	}
	return 0;
}
