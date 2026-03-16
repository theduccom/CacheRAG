#include <iostream>
#include <cstring>

using namespace std;

int small_x[4] = {-1,  0, 0, 1};
int small_y[4] = { 0, -1, 1, 0};

int medium_x[8] = {-1, -1, -1,  0, 0,  1, 1, 1};
int medium_y[8] = {-1,  0,  1, -1, 1, -1, 0, 1};

int large_x[12] = {-2, -1, -1, -1,  0,  0, 0, 0,  1, 1, 1, 2};
int large_y[12] = { 0, -1,  0,  1, -2, -1, 1, 2, -1, 0, 1, 0};

void solve()
{
	int Field[14][14];
	memset(Field, 0, sizeof(Field));
	int a, b, c;
	while(~scanf("%d,%d,%d", &a, &b, &c))
	{
		++Field[b + 2][a + 2];
		if(c == 1)
		{
			for(int i = 0; i < 4; ++i)
			{
				++Field[b + 2 + small_y[i]][a + 2 + small_x[i]];
			}
		}
		else if(c == 2)
		{
			for(int i = 0; i < 8; ++i)
			{
				++Field[b + 2 + medium_y[i]][a + 2 + medium_x[i]];
			}
		}
		else if(c == 3)
		{
			for(int i = 0; i < 12; ++i)
			{
				++Field[b + 2 + large_y[i]][a + 2 + large_x[i]];
			}
		}
	}
	int count = 0;
	int Max = 0;
	for(int i = 2; i < 12; ++i)
	{
		for(int j = 2; j < 12; ++j)
		{
			if(Field[i][j] == 0)
			{
				++count;
			}
			if(Max < Field[i][j])
			{
				Max = Field[i][j];
			}
		}
	}
	cout << count << endl;
	cout << Max << endl;
}

int main()
{
	solve();
	return(0);
}