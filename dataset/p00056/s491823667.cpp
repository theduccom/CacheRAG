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


bool* isPrime;

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

	isPrime = work;

	return res;
}

int main()
{
	vector<int> primes = CreatePrimes(50000);
	while (true)
	{
		int n;
		scanf("%d\n", &n);
		if (n == 0)
			break;

		int c = 0;
		for (int i = 2; i <= n/2; ++i)
		{
			if (isPrime[i] && isPrime[n-i])
				++c;
		}
		printf("%d\n", c);
	}

	return 0;
}