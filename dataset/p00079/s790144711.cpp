#include <iostream>
#include <cmath>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int count = 0;
	char c;
	double x[25],y[25];
	double ans = 0;
	while(cin >> x[count] >> c >> y[count])
	{
		count++;
	}

	x[count] = x[0];
	y[count] = y[0];

	rep(i,count)
	{
		ans += x[i]*y[i+1] - x[i+1]*y[i];
	}

	cout << abs(ans)/2.0 << endl;
	return 0;
}