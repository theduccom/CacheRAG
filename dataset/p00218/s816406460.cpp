#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>

using namespace std;

#ifdef _MSC_VER
#define __typeof__ decltype

template <class T>
int __builtin_popcount(T n) { return n ? 1 + __builtin_popcount(n & (n - 1)) : 0; }
#endif

#define foreach(it, c) for (__typeof__((c).begin()) it=(c).begin(); it != (c).end(); ++it)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define popcount __builtin_popcount

const double EPS = 1e-8;
typedef long long ll;
typedef pair<int, int> pint;


int main()
{
	int n;
	while (scanf("%d", &n), n)
	{
		while (n--)
		{
			int m, e, j;
			scanf("%d%d%d", &m, &e, &j);
			int ave = (m + e + j) / 3;
			int r = 0;
			if (m == 100 || e == 100 || j == 100
				|| (m + e) / 2 >= 90
				|| ave >= 80)
				r = 2;
			else if (ave >= 70
				|| ave >= 50 && (m >= 80 || e >= 80))
				r = 1;

			printf("%c\n", r == 0 ? 'C' : (r == 1 ? 'B' : 'A'));
		}
	}

	return 0;
}