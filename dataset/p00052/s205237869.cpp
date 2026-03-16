#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		int sum = 0;
		while(n)
		{
			n /= 5;
			sum += n;
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}