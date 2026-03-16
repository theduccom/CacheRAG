#include <iostream>

using namespace std;

void solve()
{
	double height;
	double Max = 0;
	double Min = 99999999;
	while(cin >> height)
	{
		Max = max(Max, height);
		Min = min(Min, height);
	}
	cout << Max - Min << endl;
}

int main()
{
	solve();
	return(0);
}