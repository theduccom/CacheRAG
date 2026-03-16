#include <iostream>
using namespace std;

const int inf = 1<<20;
int Cost[100][100];
int Time[100][100];

int main()
{
	int n,m,k,a,b,c,t;
	while(cin >> n >> m, (n||m))
	{
		for(int i=0; i<m; i++)
		for(int j=0; j<m; j++)
		{
			Cost[i][j] = Time[i][j] = (i==j?0:inf);
		}

		while(n--)
		{
			cin >> a >> b >> c >> t;
			a--; b--;
			Cost[a][b] = Cost[b][a] = c;
			Time[a][b] = Time[b][a] = t;
		}
	
		for(int l=0; l<m; l++)
		for(int i=0; i<m; i++)
		for(int j=0; j<m; j++)
		{
			if(Time[i][j]>Time[i][l]+Time[l][j]) Time[i][j] = Time[i][l]+Time[l][j];
			if(Cost[i][j]>Cost[i][l]+Cost[l][j]) Cost[i][j] = Cost[i][l]+Cost[l][j];
		}

		cin >> k;
		while(k--)
		{
			cin >> a >> b >> t;
			a--; b--;
			if(t==0){ cout << Cost[a][b] << endl; }
			if(t==1){ cout << Time[a][b] << endl; }
		}
	}
}