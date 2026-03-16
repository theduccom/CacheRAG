#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <functional>
#include <iomanip>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <typeinfo>
#define PI 3.14159265359
#define INF 99999999
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;
typedef pair<int, int> P;

bool is_prime[50001];
int n;

void sieve(int n)
{
	for (int i=0; i<=n; i++) is_prime[i] = true;
	is_prime[0] = is_prime[1] = false;
	for (int i=2; i<=n; i++)
	{
		if (is_prime[i])
		{
			for (int j=2*i; j<=n; j+=i) is_prime[j] = false;
		}
	}
}

int main()
{
	sieve(50000);

	while (cin >> n, n)
	{
		int ans = 0;
		for (int i=2; i<=n/2; i++)
		{
			if (is_prime[i] && is_prime[n - i]) ans++;
		}
		cout << ans << endl;
	}
	
	return 0;
}