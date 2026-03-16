#include<iostream>

using namespace std;

char field[12][13];
int came[12][12];
int islands;

void checker(int X, int Y)
{
	if (field[Y][X] == *"1" && came[Y][X] == 0)
	{
		came[Y][X] = 1;
		if (X != 0)
		{
			checker(X - 1, Y);
		}
		if (Y != 0)
		{
			checker(X, Y - 1);
		}
		if (X != 11)
		{
			checker(X + 1, Y);
		}
		if (Y != 11)
		{
			checker(X, Y + 1);
		}
	}
}

int main()
{
	while (cin >> field[0])
	{
		for (int a = 1; a<12; a++)
		{
			cin >> field[a];
		}

		for (int y = 0; y<12; y++)
		{
			for (int x = 0; x<12; x++)
			{
				if (field[y][x] == *"1" && came[y][x] == 0)
				{
					islands++;
					checker(x, y);
				}
			}
		}

		cout << islands << endl;

		for (int y = 0; y<12; y++)
		{
			for (int x = 0; x<12; x++)
			{
				came[y][x] = 0;
			}
		}

		islands = 0;
	}

	return 0;
}