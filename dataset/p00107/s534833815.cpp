#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <queue>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;

typedef long long int lld;

const lld mod = 1e9+7;
const lld INF = 1e9;
const lld MAXN = 1e4;

int main()
{
	lld d,w,h,n;

	while(1)
	{
		cin >> d >> w >> h;
		if (d==0 && w==0 && h==0)
		{
			break;
		}
		lld di = min(d*d+w*w, w*w+h*h);
		di = min(di,h*h+d*d);

		cin >> n;
		for(int i = 0; i < n; i++)
		{
			lld r;
			cin >> r;

			if (4*r*r > di)
			{
				cout << "OK" << endl;
			}else
			{
				cout << "NA" << endl;
			}

		}
	}
	return 0;
}