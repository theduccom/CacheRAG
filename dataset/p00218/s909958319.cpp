#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, e, m, j, i;
	double a;
	string s;
	while (cin >> n && n)
	{
		s = "";
		for (i = 0; i < n; i++)
		{
			cin >> m >> e >> j;
			a = ((double)m+e+j)/3;
			if (m == 100 || e == 100 || j == 100 || (m+e)/2 >= 90 || a >= 80)
				s += "A\n";
			else if (a >= 70 || (a >= 50 && (m >= 80 || e >= 80)))
				s += "B\n";
			else
				s += "C\n";
		}
		cout << s;
	}
}