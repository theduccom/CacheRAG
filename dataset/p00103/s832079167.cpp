#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100
typedef long long ll;

int n;
int count_HIT=0, count_OUT=0;
int Point=0;
string S;


void solve()
{
	while (count_OUT <3)
	{
		cin >> S;
		if (S == "HIT")
		{
			count_HIT++;
			if (count_HIT == 4)
			{
				Point++;
				
				count_HIT -- ;
			}
		}
		else if (S == "HOMERUN")
		{
			Point += count_HIT + 1;
			
			count_HIT = 0;
		}
		else count_OUT++;
	}
	cout << Point << endl;
	count_OUT = 0; count_HIT = 0;
	Point = 0;
	
	return;
}

int main()
{
	cin >> n;
	REP(j, n)
	{
		solve();
	}

	

	return 0;
}