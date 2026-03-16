#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>

#define PI 3.1415926535897932384626433
#define ToRadian(r) ((r)/180.0*PI)
#define ToDegree(r) ((r)*180.0/PI)
#define pow2(x) ((x) * (x))

using namespace std;

int main ( void )
{
	int n;
	
	while ( cin >> n )
	{
		while (n--)
		{
			double xa, ya, ra, xb, yb, rb;
			cin >> xa >> ya >> ra;
			cin >> xb >> yb >> rb;
			
			double dist_sq = pow2(xa - xb) + pow2(ya - yb);
			double dist_r_sq = pow2(ra + rb);
			
			if ( dist_sq > dist_r_sq )
			{
				cout << 0 << endl;
			}
			else
			{
				double dist = sqrt(dist_sq);
				double dist_a = dist + ra;
				double dist_b = dist + rb;
				int ans = 1;
				if (dist_b < ra)
					ans = 2;
				if (dist_a < rb)
					ans = -2;
				cout << ans << endl;
			}
		}
	}
	return 0;
}