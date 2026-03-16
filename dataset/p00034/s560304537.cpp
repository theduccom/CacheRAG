#include <iostream>
#include <numeric>

int main()
{
	int lengthes[10];
	char tmp;
	while (std::cin >> lengthes[0] >> tmp >> lengthes[1] >> tmp >> lengthes[2] >> tmp >> lengthes[3] >> tmp >> lengthes[4] >> tmp >> lengthes[5] >> tmp >> lengthes[6] >> tmp >> lengthes[7] >> tmp >> lengthes[8] >> tmp >> lengthes[9] >> tmp )
	{
		int v1, v2;
		std::cin >> v1 >> tmp >> v2;

		int sum = std::accumulate(&lengthes[0], &lengthes[10], 0);

		double sec = (double)(sum) / (v1 + v2);
		double dist = v1 * sec;

		int all = 0;
		int index = 1;
		for (auto length : lengthes)
		{
			all += length;
			if (dist <= all)
			{
				std::cout << index << std::endl;
				break;
			}
			index++;
		}
	}

	return 0;
}