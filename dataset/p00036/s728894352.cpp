#include<iostream>
#include<string>
using namespace  std;

string table[8];
bool range(int y,int x)
{
	if (y < 0 || x < 0 || y >= 8 || x >= 8)return false;
	return true;
}
bool A(int y, int x)
{
	int dx[] = {0,1,1,0};
	int dy[] = {0,0,1,1};
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (range(ny, nx) && table[ny][nx] == '1')continue;
		return false;
	}
	return true;
}
bool B(int y, int x)
{
	int dx[] = { 0, 0, 0, 0 };
	int dy[] = { 0, 1, 2, 3 };
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (range(ny, nx) && table[ny][nx] == '1')continue;
		return false;
	}
	return true;
}
bool C(int y, int x)
{
	int dx[] = { 0, 1, 2, 3 };
	int dy[] = { 0, 0, 0, 0 };
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (range(ny, nx) && table[ny][nx] == '1')continue;
		return false;
	}
	return true;
}
bool D(int y, int x)
{
	int dx[] = { 0, 0, -1, -1 };
	int dy[] = { 0, 1,1, 2 };
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (range(ny, nx) && table[ny][nx] == '1')continue;
		return false;
	}
	return true;
}
bool E(int y, int x)
{
	int dx[] = { 0, 1, 1, 2 };
	int dy[] = { 0, 0, 1, 1 };
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (range(ny, nx) && table[ny][nx] == '1')continue;
		return false;
	}
	return true;
}
bool F(int y, int x)
{
	int dx[] = { 0, 0, 1, 1 };
	int dy[] = { 0, 1, 1, 2 };
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (range(ny, nx) && table[ny][nx] == '1')continue;
		return false;
	}
	return true;
}
bool G(int y, int x)
{
	int dx[] = { 0, 1, 0, -1 };
	int dy[] = { 0, 0, 1, 1 };
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (range(ny, nx) && table[ny][nx] == '1')continue;
		return false;
	}
	return true;
}
char check(int y, int x)
{
	if (A(y, x))return 'A';
	else if (B(y, x))return 'B';
	else if (C(y, x))return 'C';
	else if (D(y, x))return 'D';
	else if (E(y, x))return 'E';
	else if (F(y, x))return 'F';
	else if (G(y, x)) return 'G';
	else return 0;
}
int main()
{
	while (true)
	{
		for (int i = 0; i < 8; i++)
		{
			if (!(cin >> table[i]))return 0;
		}
		bool find = false;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				int ret = check(i,j);
				if (ret > 0)
				{
					find = true;
					cout << ((char)ret) << endl;
					break;
				}
			}
			if (find)break;
		}
	}
	return 0;
}