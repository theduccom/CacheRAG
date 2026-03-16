#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <list>
#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <complex>


typedef long long ll;
const double Eps = 1e-6;

using namespace std;

const int Max = 10001;
bool isPrime[Max];
pair<int, int> twinPrimes[Max];
int main()
{
	fill(isPrime, isPrime+Max, true);
	int prev = -100;
	pair<int, int> twin;
	for (int i = 2; i < Max; ++i)
	{
		if (isPrime[i])
		{
			for (int j = 2*i; j < Max; j += i)
				isPrime[j] = false;
			if (i - prev == 2)
				twin = make_pair(prev, i);
			prev = i;
		}
		twinPrimes[i] = twin;
	}

	int n;
	while (scanf("%d", &n), n)
		printf("%d %d\n", twinPrimes[n].first, twinPrimes[n].second);

	return 0;
}