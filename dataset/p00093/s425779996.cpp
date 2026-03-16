#include <iostream>
using namespace std;
int main()
{
	int a, b, i;
	bool f, g = false;
	while (cin >> a >> b)
	{
		if (a == 0 && b == 0) break;
		if (g) cout << endl;
		for (i = a, f = false; i <= b; i++)
		{
			if (i%4 == 0)
			{
				if (i%100 == 0 && i%400 != 0) continue;
				cout << i << endl;
				f = true;
			}
		}
		if (!f) cout << "NA" << endl;
		g = true;
	}
}