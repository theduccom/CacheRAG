#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#include<cstdio>
#include<cmath>
#include<string>


#define REP(i,n) for(int i=0;i<(int)(n);i++)

typedef long long ll;
#define INF 1e9

using namespace std;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int road[n+1][n+1];
	REP(i,n+1)REP(j,n+1){ road[i][j] = INF;if(i == j)road[i][j] = 0;}
	
	
	REP(i,m)
	{
		int a,b,c,d;
		scanf("%d, %d, %d, %d",&a,&b,&c,&d);
		road[a][b] = c;road[b][a] = d;
	}
	
	int x1,x2,y1,y2;
	scanf("%d, %d, %d, %d",&x1,&x2,&y1,&y2);
	REP(k,n+1)REP(i,n+1)REP(j,n+1)
	road[i][j] = min(road[i][j] ,road[i][k] + road[k][j]);
	
	cout << y1 - y2 - road[x1][x2] - road[x2][x1] << endl;
	
	
	return 0;
}