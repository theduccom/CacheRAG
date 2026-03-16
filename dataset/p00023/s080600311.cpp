#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
	int N;
	cin >> N;
	while(N--)
	{
		double x[2];
		double y[2];
		double r[2];
		for(int i = 0; i < 2; ++i)
		{
			cin >> x[i] >> y[i] >> r[i];
		}
		double dist = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]));
		if(dist > r[0] + r[1])
		{
			cout << "0" << endl;
		}
		else if(dist + r[0] < r[1])
		{
			cout << "-2" << endl;
		}
		else if(dist + r[1] < r[0])
		{
			cout << "2" << endl;
		}
		else
		{
			cout << "1" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}