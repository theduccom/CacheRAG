#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <utility>
#include <numeric>

using namespace std;

using ll = long long;
using ull = unsigned long long;

const ll inf = (ll)1e9;
const ll mod = (ll)1e9 + 7;

int main()
{
	string s;

	while (cin >> s)
	{
		string t;
		for (int i = 0; i < s.length(); i++)
		{
			if (s.at(i) == '@')
			{
				int m = s.at(i + 1) - '0';
				for (int j = 0; j < m; j++)
				{
					t += s.substr(i + 2, 1);
				}
				i += 2;
			}
			else
			{
				t += s.substr(i, 1);
			}
		}

		cout << t << endl;
	}
}

