#include <iostream>
#include <algorithm>
#define INF 1001
using namespace std;

int main()
{
    int m,n,a,b,c,d,x[2],y1,y2;
    int w[20][20],di[20],f[20];
    for (int i=0; i<20; i++)
    {
	for (int j=0; j<20; j++)
	{
	    w[i][j]=INF;
	}
    }
    scanf("%d\n%d",&n,&m);
    for (int i=0; i<m; i++)
    {
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	w[a][b] = c;
	w[b][a] = d;
    }
    scanf("%d,%d,%d,%d",&x[0],&x[1],&y1,&y2);
    for (int i=0; i<2; i++)
    {
	for (int j=0; j<20; j++)
	{
	    di[j] = INF;
	    f[j] = 0;
	}
	di[x[i]] = 0;
	for (int j=0; j<20; j++)
	{
	    int min = INF;
	    int p;
	    for (int k=0; k<20; k++)
	    {
		if (f[k] == 0 && min > di[k])
		{
		    min = di[k];
		    p = k;
		}
	    }
	    f[p]=1;
	    for (int k=0; k<20; k++)
	    {
		di[k] = std::min(di[k],di[p]+w[p][k]);
	    }
	}
	y1-=di[x[1-i]];
    }
    cout << y1-y2 << endl;
    return 0;
}