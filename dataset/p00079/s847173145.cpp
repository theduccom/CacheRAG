#include <bits/stdc++.h>
using namespace std;
typedef complex<double> xy_t; 
xy_t p[22];
char c;
double x, y;
double sum;
int n;
int main()
{
	sum=0.0;
	n=0;
	//while(scanf("%lf,%lf", &x, &y)!=EOF)
	while(cin >> x >> c >> y)
	{
		n++;
		p[n]=xy_t(x, y);
	}
	p[n+1]=p[1];
	for(int i=1; i<=n; i++)
	{
		sum+=(conj(p[i])*p[i+1]).imag()/2;
	}
	cout << abs(sum) << endl;
	return 0;
}