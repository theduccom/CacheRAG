#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
using namespace std;

int map[12][12];

void SagasiteHappy(int i, int j)
{
	map[i][j] = 0;
	if (i > 0)
	{
		if (map[i - 1][j] == 1)
		{
			SagasiteHappy(i - 1, j);
		}
	}

	if (i < 11)
	{
		if (map[i + 1][j] == 1)
		{
			SagasiteHappy(i + 1, j);
		}
	}

	if (j > 0)
	{
		if (map[i][j - 1] == 1)
		{
			SagasiteHappy(i, j - 1);
		}
	}

	if (j < 11)
	{
		if (map[i][j + 1] == 1)
		{
			SagasiteHappy(i, j + 1);
		}
	}
}

int main()
{
	string line;
	while (cin >> line)
	{
		int cnt = 0;
		for (int i = 0; i < 12; i++)
		{
			map[0][i] = line[i] - '0';
		}
		for (int i = 1; i < 12; i++)
		{
			cin >> line;

			for (int j = 0; j < 12; j++)
			{
				map[i][j] = line[j] - '0';
			}
		}
	
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				if (map[i][j] == 1)
				{
					cnt++;
					SagasiteHappy(i, j); //まずijを0にして、上下左右探して1ならそいつをSagasiteHappyする
				}
			}
		}
		cout << cnt << endl;
	}


	return 0;
}