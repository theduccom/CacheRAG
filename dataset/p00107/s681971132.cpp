#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{

	int a, b, c, n, r;

	while (cin >> a >> b >> c)
	{
		if ((a == 0) && (b == 0) && (c == 0)) break;

		double ab, bc, ac, taikaku;
		ab = sqrt(pow(a, 2) + pow(b, 2));
		bc = sqrt(pow(b, 2) + pow(c, 2));
		ac = sqrt(pow(a, 2) + pow(c, 2));
		taikaku = ab;
		if (taikaku>bc)
		{
			taikaku = bc;
		}
		else if (taikaku>ac)
		{
			taikaku = ac;
		}

		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> r;
			if (r*2>taikaku)
			{
				cout << "OK" << endl;
			}
			else
			{
				cout << "NA" << endl;
			}
		}

	}
	return 0;
}