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
	int w;
	while (scanf("%d", &w), w != -1)
	{
		int charge = 1150;
		if (w > 10)
			charge += 125 * min(10, w - 10);
		if (w > 20)
			charge += 140 * min(10, w - 20);
		if (w > 30)
			charge += 160 * (w - 30);
		printf("%d\n", 4280 - charge);
	}

	return 0;
}