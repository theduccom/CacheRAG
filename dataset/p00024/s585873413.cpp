#include <iostream>

using namespace std;

void solve()
{
	double v;
	while(cin >> v)
	{
		double t = v / 9.8;
		double y = 4.9 * t * t;
		int N = 1;
		while(y > 5 * N - 5)
		{
			++N;
		}
		cout << N << endl;
	}
}

int main()
{
	solve();
	return(0);
}