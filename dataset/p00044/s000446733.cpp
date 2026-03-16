#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>
#include <queue>
#include <set>

#define PI 3.14159265359

#define INF 1000000;

#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)

typedef long long ll;

using namespace std;


/*
class ElectronicPetEasy
{
public:
	string isDifficult(int st1, int p1, int t1, int st2, int p2, int t2)
	{
		
	}
};
*/


int prime[50000];
bool is_prime[60000];


void sieve(void)
{
	int p = 0;
	
	REP(60000) is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for (int i=2; i<60000; i++)
	{
		if (is_prime[i])
		{
			prime[p++] = i;
			for (int j=2*i; j<60000; j+=i) is_prime[j] = false;
		}
	}
}


int main()
{
	int n, less, more;
	
	sieve();
	
	while (cin >> n)
	{
		for (int i=0; i<50000; i++)
		{
			if (prime[i] > n)
			{
				more = prime[i];
				break;
			}
		}
		
		for (int i=0; i<50000; i++)
		{
			if (prime[i] >= n)
			{
				less = prime[i - 1];
				break;
			}
		}
		
		cout << less << " " << more << endl;
	}
	
	return 0;
}