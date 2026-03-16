#include <iostream>
using namespace std;
bool t[60000] = {false};
int main()
{
	int n, c, i, j, a, b;
	t[0] = true;
	for (i = 2; i * i <= 60000; i++)
	{
		if (!t[i-1])
		{
			for (j = i+i; j <= 60000; j+=i)
				t[j-1] = true;
		}
	}
	while (cin >> n)
	{
		if (cin.eof()) break;
		for (i = n-1; i >= 2; i--)
			if (!t[i-1])
			{
				a = i;
				break;
			}
		for (i = n+1; i < 60000; i++)
			if (!t[i-1])
			{
				b = i;
				break;
			}
		cout << a << " " << b << endl;
	}
}