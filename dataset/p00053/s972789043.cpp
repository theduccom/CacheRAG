#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;

vector<int> CreatePrimes(int n)
{
	bool* work = new bool[n+1];

	fill(work, work+(n+1), true);
	work[0] = work[1] = false;

	vector<int> res;
	res.push_back(2);
	for (int i = 4; i <= n; i += 2)
		work[i] = false;

	for (int i = 3; i <= n; i += 2)
	{
		if (work[i])
		{
			res.push_back(i);
			for (int j = 2*i; j <= n; j += i)
				work[j] = false;
		}
	}

	delete[] work;

	return res;
}


int main()
{
	vector<int> primes = CreatePrimes(110000);
	long s[10001];
	s[0] = 0;
	for (int i = 1; i <= 10000; ++i)
		s[i] = s[i-1] + primes[i-1];

	while (true)
	{
		int n;
		scanf("%d\n", &n);
		if (n == 0)
			break;
		printf("%d\n", s[n]);
	}

	return 0;
}