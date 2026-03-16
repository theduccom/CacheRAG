#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (; n--; )
	{
		string a, b;
		cin >> a >> b;

		string c;

		int add = 0;
		int len = max(a.length(), b.length());
		for (int i = 0; i < len; i++)
		{
			int a0 = 0, b0 = 0;
			int ai = a.length() - i - 1;
			if (ai >= 0)
			{
				a0 = atoi(a.substr(ai, 1).c_str());
			}
			int bi = b.length() - i - 1;
			if (bi >= 0)
			{
				b0 = atoi(b.substr(bi, 1).c_str());
			}
			
			int c0 = a0 + b0 + add;
			add = (c0 >= 10) ? 1 : 0;

			c += to_string(c0).back();
		}
		if (add == 1)
		{
			c += to_string(1);
		}
		reverse(c.begin(), c.end());

		cout << (c.length() > 80 ? "overflow" : c) << endl;
	}
}
