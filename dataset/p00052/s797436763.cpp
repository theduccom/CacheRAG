#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		int count = 0;
		for(int i = 1; i <= n; ++i)
		{
			int temp = i;
			while( temp >= 5 && temp % 5 == 0)
			{
				temp /= 5;
				count++;
			}
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}