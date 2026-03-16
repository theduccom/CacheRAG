#include <cstdio>
using namespace std;

#define REP(i,n) for(int i=0; i<n; i++)

int main()
{
	int n,m,a,b,ab,ba,x1,x2,y1,y2,t[32][32];

	scanf("%d %d",&n,&m);
	REP(i,n)REP(j,n)
	{
		t[i][j]=(i==j?0:1<<20);
	}

	while(m--)
	{
		scanf("%d,%d,%d,%d",&a,&b,&ab,&ba);
		a--;b--;
		t[a][b]=ab;
		t[b][a]=ba;
	}
	scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);

	REP(k,n)REP(i,n)REP(j,n)
	{
		if(t[i][j]>t[i][k]+t[k][j]) t[i][j]=t[i][k]+t[k][j];
	}

	x1--;x2--;
	printf("%d\n",y1-y2-t[x1][x2]-t[x2][x1]);
}