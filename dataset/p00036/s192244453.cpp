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
#include <set>

#define PI 3.14159265359

#define INF 1000000;

#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)

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


char grid[15][15];

char solve(int i,int j){
    if(grid[i][j]=='1'&&grid[i+1][j]=='1'&&grid[i][j+1]=='1'&&grid[i+1][j+1]=='1'){
        return 'A';
    }
    if(grid[i][j]=='1'&&grid[i+1][j]=='1'&&grid[i+2][j]=='1'&&grid[i+3][j]=='1'){
        return 'B';
    }
    if(grid[i][j]=='1'&&grid[i][j+1]=='1'&&grid[i][j+2]=='1'&&grid[i][j+3]=='1'){
        return 'C';
    }
    if(grid[i][j]=='1'&&grid[i][j+1]=='1'&&grid[i+1][j+1]=='1'&&grid[i+1][j+2]=='1'){
        return 'E';
    }
    if(grid[i][j]=='1'&&grid[i+1][j]=='1'&&grid[i+1][j+1]=='1'&&grid[i+2][j+1]=='1'){
        return 'F';
    }
    if(j>0){
        if(grid[i][j]=='1'&&grid[i+1][j]=='1'&&grid[i+1][j-1]=='1'&&grid[i+2][j-1]=='1'){
            return 'D';
        }
        if(grid[i][j]=='1'&&grid[i+1][j]=='1'&&grid[i+1][j-1]=='1'&&grid[i][j+1]=='1'){
            return 'G';
        }
    }
    return 0;
}
int main()
{
	while (!cin.eof())
	{
		rep(i, 15)
		{
			rep(j, 15)
			{
				grid[i][j] = '0';
			}
		}
		
		rep(i, 8)
		{
			cin >> grid[i];
		}
		
		char ans;
		bool solved = true;
		
		rep(i, 8)
		{
			rep(j, 8)
			{
				if (grid[i][j] == '1')
				{
					if (solved)
					{
						ans = solve(i, j);
						cout << ans << endl;
						solved = false;
					}
				} else {
					continue;
				}
			}
		}
	}
	
	return 0;
}