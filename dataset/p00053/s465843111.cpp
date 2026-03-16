#include <iostream>
using namespace std;
bool t[999999] = {false};
int main()
{
	int n, c, i, j, d;
	t[0] = true;
	for (i = 2; i * i <= 999999; i++)
	{
		if (!t[i-1])
		{
			for (j = i+i; j <= 999999; j+=i)
				t[j-1] = true;
		}
	}
	while (cin >> n, n)
	{
		c = 0;
		d = 1;
		for (i = 1; d <= n; i++)
		{
			if (!t[i])
			{
				c += i+1;
				d++;
			}
		}
		cout << c << endl;
	}
}