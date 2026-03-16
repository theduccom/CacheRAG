#include <iostream>
#include <cstring>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int a[101][101];
	int n;
	while(cin >> n && n)
	{
		memset(a,0,sizeof(a));
		rep(i,n)
		{
			rep(j,n)
			{
				cin >> a[i][j];
			}
		}

		int sum_n = 0;
		rep(i,n)
		{
			int sum = 0;
			int sum_2 = 0;
			rep(j,n)
			{
				sum += a[i][j]; 
				sum_2 += a[j][i];
			}
			a[i][n] = sum;
			a[n][i] = sum_2;

			sum_n += a[i][n];
		}

		a[n][n] = sum_n;

		rep(i,n+1)
		{
			rep(j,n+1)
			{
				cout.width(5);
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}