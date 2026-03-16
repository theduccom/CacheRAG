#include <iostream>
using namespace std;

int main()
{
	int n;
	int p[50000] = {};

	for (int i = 2; i <= 50000; ++i)
	{
		if (p[i-2] == 0)
		{
			p[i-2] = 1;
			for (int j = i+i; j <= 50000; j += i) p[j-2] = -1;
		}
	}

	while (cin >> n && n)
	{
		int r = 0;
		for (int i = 2; i <= n/2; ++i) if (p[i-2] == 1 && p[n-i-2] == 1) ++r;
		cout << r << endl;
	}
	return 0;
}