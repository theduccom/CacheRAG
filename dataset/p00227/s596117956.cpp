#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	while (1)
	{
		int n, m, p[1000], sum = 0;
		cin >> n >> m;
		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; i++)
		{
			cin >> p[i];
			sum += p[i];
		}
		sort(p, p + n);
		for (int i = n - m; i >= 0; i -= m)
		{
			sum -= p[i];
		}
		cout << sum << endl;
	}
	
}