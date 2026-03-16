#include <cstdio>
using namespace std;

#define REP(i,n) for(int i=1; i<=n; i++)

int main()
{
	int n,m,a,b,c,d,x,y,z,w,t[32][32];

	scanf("%d %d",&n,&m);
	REP(i,n)REP(j,n)
	{
		t[i][j]=(i==j?0:1<<20);
	}

	while(m--)
	{
		scanf("%d,%d,%d,%d",&a,&b,&c,&d);
		t[a][b]=c;
		t[b][a]=d;
	}
	scanf("%d,%d,%d,%d",&x,&y,&z,&w);

	REP(k,n)REP(i,n)REP(j,n)
	{
		if(t[i][j]>t[i][k]+t[k][j]) t[i][j]=t[i][k]+t[k][j];
	}

	printf("%d\n",z-w-t[x][y]-t[y][x]);
}