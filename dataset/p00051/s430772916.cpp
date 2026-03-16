#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		vector<char> c(8);
		for(int i = 0; i < 8; ++i)
		{
			cin >> c[i];
		}
		sort(c.begin(), c.end());
		char Min[9];
		for(int i = 0; i < 8; ++i)
		{
			Min[i] = c[i];
		}
		sort(c.begin(), c.end(), greater<char>());
		char Max[9];
		for(int i = 0; i < 8; ++i)
		{
			Max[i] = c[i];
		}
		int a = atoi(Min);
		int b = atoi(Max);
		cout << b - a << endl;		
	}
}

int main()
{
	solve();
	return(0);
}