#include <iostream>
using namespace std;

int main()
{
	char c;
	int x1,x2,y1,y2;
	int n,m,a,b,ab,ba;
	int tb[32][32];

	cin >> n >> m;
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	{
		tb[i][j] = (i==j ? 0 : 1<<20);
	}

	while(m--)
	{
		cin >> a >> c >> b >> c >> ab >> c >> ba;
		a--; b--;
		tb[a][b] = ab;
		tb[b][a] = ba;
	}
	cin >> x1 >> c >> x2 >> c >> y1 >> c >> y2;

	for(int k=0; k<n; k++)
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	{
		if(tb[i][j]>tb[i][k]+tb[k][j]) tb[i][j]=tb[i][k]+tb[k][j];
	}

	x1--; x2--;
	cout << y1-y2-tb[x1][x2]-tb[x2][x1] << endl;
}