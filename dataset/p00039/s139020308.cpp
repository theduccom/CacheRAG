#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
using namespace std;
#define M_PI 3.141592
#define toRad 2.0*M_PI/360.0
#define inin(x) int x;cin>>x;
#define all(x) x.begin(),x.end()

long long roman(char c)
{
	char a[7+1] = "IVXLCDM";
	long long x[7] = { 1,5,10,50,100,500,1000 };
	for (int i = 0; i < 7; i++)
	{
		if (a[i] == c)
		{
			return x[i];
		}
	}
	return 0;
}


int main()
{
	string a;
	while (cin >> a)
	{
		long long ans = 0;
		reverse(all(a));
		long long b = 0;
		for (int i = 0; i < a.size(); i++)
		{
			long long now = roman(a[i]);
			if (b <= now)
			{
				ans += now;
			}
			else
			{
				ans -= now;
			}
			b = now;
		}
		cout << ans << endl;
	}

}