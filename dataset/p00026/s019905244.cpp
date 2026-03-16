#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace  std;
int table[10][10];
bool range(int x, int y)
{
	if (x < 0 || y < 0 || x >= 10 || y >= 10)return false;
	return true;
}
void draw(int x,int y,int s)
{
	if (s == 1)
	{
		int dx[] = { 0,0, 1, 0, -1 };
		int dy[] = { 0,1, 0, -1, 0 };
		for (int i = 0; i < 5; i++)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;
			if (range(nx, ny))
			{
				table[ny][nx]++;
			}
		}
	}
	else if (s == 2)
	{
		int dx[] = { 0, -1, 0, 1, 1, 1, 0, -1, -1 };
		int dy[] = { 0, -1, -1, -1, 0, 1, 1, 1, 0 };
		for (int i = 0; i < 9; i++)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;
			if (range(nx, ny))
			{
				table[ny][nx]++;
			}
		}
	}
	else if (s == 3)
	{
		int dx[] = { 0, -1, 0, 1, 1, 1, 0, -1, -1, 0, 2, 0, -2 };
		int dy[] = { 0, -1, -1, -1, 0, 1, 1, 1, 0, -2, 0, 2, 0 };
		for (int i = 0; i < 13; i++)
		{
			int nx = dx[i] + x;
			int ny = dy[i] + y;
			if (range(nx, ny))
			{
				table[ny][nx]++;
			}
		}
	}
}
int main()
{
	int x = 0, y = 0, size = 0;
	int count = 0;
	int Max = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			table[i][j] = 0;
		}
	}
	string s;
	while (cin >> s)
	{
		x = s[0] - '0';
		y = s[2] - '0';
		size = s[4] - '0';
		draw(x, y, size);
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (table[i][j] == 0)count++;
			Max = max(Max, table[i][j]);
		}
	}
	cout << count << endl;
	cout << Max << endl;
	return 0;
}