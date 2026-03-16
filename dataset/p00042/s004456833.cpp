#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int wmax,n,m;
    int val,w;
    int t[1001];
    int i,j,c;
    c = 0;
    while(1)
    {
	cin >> wmax;
	if (wmax == 0)break;
	for (i=0; i<1001; i++)
	{
	    t[i]=0;
	}
	c++;
	m = 0;
	cin >> n;
	for (i=0; i<n; i++)
	{
	    scanf("%d,%d",&val,&w);
	    for (j=wmax; j>w; j--)
	    {
		if (t[j-w] != 0)
		{
		    t[j] = max(t[j],val+t[j-w]);
		    m = max(m,t[j]);
		}
	    }
	    t[w] = max(t[w],val);
	    if (w<=wmax)
		m = max(m,val);
	}
	for (j=0; j<=wmax; j++)
	{
	    if (m==t[j])
		break;
	}
	cout << "Case " << c << ":" << endl;
	cout << m << endl;
	cout << j << endl;
    }
    return 0;
}