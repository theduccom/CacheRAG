#include <iostream>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long
#define INF 2147483647/2

int main()
{
    while(1)
    {
	int n,m,a,b,cost,time;
	int table[2][100][100];
	rep(i,2)rep(j,100)rep(k,100){
	    if (j==k)
		table[i][j][k]=0;
	    else
		table[i][j][k]=INF;
	}
	cin >> n >> m;
	if (n==0)break;
	rep(i,n)
	{
	    cin >> a >> b >> cost >> time;
	    a--;b--;
	    table[0][a][b]=cost;
	    table[0][b][a]=cost;
	    table[1][a][b]=time;
	    table[1][b][a]=time;
	}
	rep(i,2)rep(j,m)rep(k,m)rep(l,m)table[i][k][l] = min(table[i][k][l],table[i][k][j]+table[i][j][l]);
	cin >> n;
	int p,q,r;
	rep(i,n)
	{
	    cin >> p >> q >> r;
	    cout << table[r][p-1][q-1] << endl;
	}
    }
    return 0;
}