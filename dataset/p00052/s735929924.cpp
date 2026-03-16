#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n, n)
	{
		int count = 0;
		for (int i = 1; i <= n; i++)
		{
			int x = i;
			while (x % 5 == 0)
			{
				count++;
				x /= 5;
			}
		}
		cout << count << endl;
	}

	return 0;
}