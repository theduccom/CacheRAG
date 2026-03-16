using namespace std;
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

typedef vector<int> VI;
typedef pair<int, int> PII;

#define REP(i, n) for(int i=0; i<n; i++)

int n, m, total;
VI v;

int main()
{
	while( 1 )
	{
		cin >> n >> m;
		if(n==0 && m==0)
			break;

		v = VI(n);
		REP(i, n)
		{
			cin >> v[i];
		}
		
		sort(v.rbegin(), v.rend());
		total = 0;
		REP(i, n)
		{
			if(i%m!=m-1)
				total += v[i];
		}
		printf("%d\n", total);
	}
}