#include <iostream>

using namespace std;
int Field[14][14];
int move_x[] = {-1, 0, 1,  0, -1,  1,  1, -1, -2, 0, 2,  0};
int move_y[] = { 0, 1, 0, -1,  1,  1, -1, -1,  0, 2, 0, -2};


void solve()
{
	int ax, ay, at;
	while(~scanf("%d%*c%d%*c%d", &ax, &ay, &at))
	{
		int size = at * 4;
		Field[ax + 2][ay + 2]++;
		for(int i = 0; i < size; ++i)
		{
			int X = ax + move_x[i] + 2;
			int Y = ay + move_y[i] + 2;
			Field[X][Y]++;
		}
	}
	int count = 0;
	int deepest = 0;
	for(int i = 2; i < 12; ++i)
	{
		for(int j = 2; j < 12; ++j)
		{
			if(Field[i][j] > 0)
			{
				if(deepest < Field[i][j])
				{
					deepest = Field[i][j];
				}
			}
			else
			{
				count++;
			}
		}
	}
	cout << count << endl << deepest << endl;
}

int main()
{
	solve();
	return(0);
}