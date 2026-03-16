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
	vector<int> primes = CreatePrimes(51000);
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int minP = *(lower_bound(primes.begin(), primes.end(), n) - 1);
		int maxP = *upper_bound(primes.begin(), primes.end(), n);
		printf("%d %d\n", minP, maxP);
	}

	return 0;
}