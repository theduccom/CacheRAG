#include <iostream>
#include <iomanip>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	double a[10],n;
	while(cin >> n)
	{
		double ans = 0;
		a[0] = n;
		REP(i,1,10)
		{
			if((i+1)%2 == 0)
			{
				a[i] = a[i-1]*2;
			}
			else
			{
				a[i] = (a[i-1]/3);
			}
		}
		rep(i,10)
		{
			ans += a[i];
		}

		
		cout << setprecision(10)<< ans << endl;
	}
	return 0;
}