#include<iostream>
#include<algorithm>
using namespace  std;

int main()
{
	double n;
	double mi = 1e18, ma = 0.0;
	while (cin >> n)
	{
		ma = max(ma, n);
		mi = min(mi, n);
	}
	cout << (ma - mi) << endl;
	return 0;
}