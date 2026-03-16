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


int length(int a[])
{
	int res = 0, len = 0;
	REP(14)
	{
		if (a[i]) len++;
		else len = 0;
		res = max(res, len);
	}
	return res;
}


int main()
{
	int a[14], n;
	string ans;
	
	while (scanf("%d", &n) != EOF)
	{
		fill(a, a + 14, 0);
		a[n - 1]++;
		if (n == 1) a[13]++;
		for (int i=1; i<5; i++)
		{
			scanf(",%d", &n);
			a[n - 1]++;
			if (n == 1) a[13]++;
		}
		ans = "null";
		if (count(a, a + 13, 4) == 1) ans = "four card";
		else if (count(a, a + 13, 3) == 1 && count(a, a + 13, 2) == 1) ans = "full house";
		else if (length(a) == 5) ans = "straight";
		else if (count(a, a + 13, 3) == 1) ans = "three card";
		else if (count(a, a + 13, 2) == 2) ans = "two pair";
		else if (count(a, a + 13, 2) == 1) ans = "one pair";
		
		cout << ans << endl;
	}
	
	return 0;
}