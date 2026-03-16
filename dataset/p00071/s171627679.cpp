#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
bool f[8][8];
int dx[12]={0,0,0,0,0,0,1,-1,2,-2,3,-3};
int dy[12]={1,-1,2,-2,3,-3,0,0,0,0,0,0};
bool check(int x,int y)
{
	if(x>=0&&x<8&&y>=0&&y<8)
	{
		if(f[x][y])
		{
			return true;
		}
	}
	return false;
}
void dfs(int x,int y)
{
	f[x][y]=false;
	for(int i=0;i<12;i++)
	{
		if(check(x+dx[i],y+dy[i]))
		{
			dfs(x+dx[i],y+dy[i]);
		}
	}
	return ;
}
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<8;j++)
		{
			char s[9];
			cin >> s;
			for(int k=0;k<8;k++)
			{
				if(s[k]=='1')
				{
					f[j][k]=true;
				}
				else
				{
					f[j][k]=false;
				}
			}
		}
		int p,q;
		cin >> p >> q;
		dfs(q-1,p-1);
		cout << "Data " << i+1 << ':' << endl;
		for(int j=0;j<8;j++)
		{
			for(int k=0;k<8;k++)
			{
				if(f[j][k])
				{
					cout << 1;
				}
				else
				{
					cout << 0;
				}
			}
			cout << endl;
		}
	}
	return 0;
}