#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
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
#define EQ(a,b) (abs((a)-(b))<EPS)
int d[11][11];
int main()
{
	while(1)
	{
		int n;
		cin >> n;
		if(n==0)break;
		for(int i=0;i<11;i++)
		{
			for(int j=0;j<11;j++)
			{
				d[i][j]=0;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> d[i][j];
			}
		}
		int x=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				d[i][n]+=d[i][j];
				d[n][i]+=d[j][i];
				x+=d[i][j];
			}
		}
		d[n][n]=x;
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				printf("%5d",d[i][j]);
			}
			cout << endl;
		}
	}
	return 0;
}