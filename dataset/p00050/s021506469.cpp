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
#include <utility>
#include <numeric>

using namespace std;
typedef long long llong;
typedef unsigned long long ullong;

const ullong MOD = 1000000000 + 7;

bool check(char c)
{
	return ('a' <= c && c <= 'z');
}

int main()
{
	string s;
	string t;

	getline(cin, s);

	bool ok = true;
	for (int i = 0; i < s.length(); i++)
	{
		if (i + 5 <= s.length())
		{
			if (s.substr(i, 5) == "peach")
			{
				s.erase(i, 5);
				s.insert(i, "apple", 5);
			}
			else if (s.substr(i, 5) == "apple")
			{
				s.erase(i, 5);
				s.insert(i, "peach", 5);
			}
		}

		cout << s.substr(i, 1);
	}

	cout << endl;
}
