#include <iostream>
using namespace std;
int main()
{
	int cell[10][10] = {{0}}, x, y, size, i, j, max = 0, num = 0;
	char c;
	while (1)
	{
		cin >> x;
		if (cin.eof()) break;
		cin >> c >> y >> c >> size;
		switch (size)
		{
			case 1:
				for (i = y-1; i <= y+1; i++)
				{
					for (j = ((i == y-1 || i == y+1) ? x : x-1); j <= ((i == y-1 || i == y+1) ? x : x+1); j++)
					{
						if ((0 <= i && i < 10) && (0 <= j && j < 10))
							cell[j][i]++;
					}
				}
				break;
			case 2:
				for (i = y-1; i <= y+1; i++)
				{
					for (j = x-1; j <= x+1; j++)
					{
						if ((0 <= i && i < 10) && (0 <= j && j < 10))
							cell[j][i]++;
					}
				}
				break;
			case 3:
				for (i = y-2; i <= y+2; i++)
				{
					for (j = ((i == y-2 || i == y+2) ? x : ((i == y-1 || i == y+1) ? x-1 : x-2)); j <= ((i == y-2 || i == y+2) ? x : ((i == y-1 || i == y+1) ? x+1 : x+2)); j++)
					{
						if ((0 <= i && i < 10) && (0 <= j && j < 10))
							cell[j][i]++;
					}
				}
				break;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (cell[j][i] >= max)
				max = cell[j][i];
			if (cell[j][i] == 0)
				num++;
		}
	}
	cout << num << endl << max << endl;
	return 0;
}