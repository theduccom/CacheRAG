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

#define INF 99999999;

#define rep(i, n) for(int i=0; i<n; i++)
#define REP(n) rep(i, n)

typedef long long ll;

using namespace std;



/*
class LightSwitchingPuzzle
{
public:
	int minFlips(string s)
	{

	}
}
*/


int main()
{
	int n, p, d1, d2, max_p, max_d;
	
	while (cin >> n, n)
	{
		max_d = 0;
		
		REP(n)
		{
			cin >> p >> d1 >> d2;
			if (d1 + d2 > max_d)
			{
				max_d = d1 + d2;
				max_p = p;
			}
		}
		
		cout << max_p << " " << max_d << endl;
	}
	
	return 0;
}