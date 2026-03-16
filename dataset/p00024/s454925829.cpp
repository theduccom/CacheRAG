#include <iostream>

using namespace std;

void solve()
{
	double velocity;
	while(cin >> velocity)
	{
		double time = velocity / 9.8;
		double height = 4.9 * time * time;
		int level = 0;
		cout << (unsigned long long int)((height + 5) / 5 + 1.0) << endl;
	}
}

int main()
{
	solve();
	return(0);
}