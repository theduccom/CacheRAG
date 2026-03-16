#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>

#define PI 3.14159265359

#define INF 1000000;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

typedef long long ll;

using namespace std;


/*
class ElectronicPetEasy
{
public:
	string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2)
	{
		
	}
};
*/




int main()
{
	int vx[]={ 0, 1,-1, 0, 0,-1,-1, 1, 1, 2,-2, 0, 0};
	int vy[]={ 0, 0, 0, 1,-1,-1, 1,-1, 1, 0, 0, 2,-2};
	int x, y, size, grid[10][10], nm_ans = 0, max_ans = 0;
	
	//grid初期化
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<10; j++)
		{
			grid[i][j] = 0;
		}
	}
	
	while (scanf("%d,%d,%d", &x, &y, &size) != EOF)
	{
		switch (size)
		{
		case 1:
			for (int i=0; i<5; i++)
			{
				if ((min(x+vx[i], y+vy[i]) >= 0) && (max(x+vx[i], y+vy[i]) < 10))
				{
					grid[x+vx[i]][y+vy[i]]++;
				}
			}
			break;
		case 2:
			for (int i=0; i<9; i++)
			{
				if ((min(x+vx[i], y+vy[i]) >= 0) && (max(x+vx[i], y+vy[i]) < 10))
				{
					grid[x+vx[i]][y+vy[i]]++;
				}
			}
			break;
		case 3:
			for (int i=0; i<13; i++)
			{
				if ((min(x+vx[i], y+vy[i]) >= 0) && (max(x+vx[i], y+vy[i]) < 10))
				{
					grid[x+vx[i]][y+vy[i]]++;
				}
			}
			break;
		}
	}
	
	for (int i=0; i<10; i++)
	{
		for (int j=0; j<10; j++)
		{
			max_ans = max(max_ans, grid[i][j]);
			if (grid[i][j] == 0) nm_ans++;
		}
	}
	
	cout << nm_ans << endl;
	cout << max_ans << endl;
	
	return 0;
}