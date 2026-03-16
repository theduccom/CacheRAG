#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n)
	{
		int sum = 0;
		if(n == -1)
		{
			break;
		}
		if(n > 30)
		{
			sum += (n - 30) * 160;
			n = 30;
		}
		if(n > 20)
		{
			sum += (n - 20) * 140;
			n = 20;
		}
		if(n > 10)
		{
			sum += (n - 10) * 125;
			n = 10;
		}
		if(n >= 0)
		{
			sum += 1150;
		}
		cout << 4280 - sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}