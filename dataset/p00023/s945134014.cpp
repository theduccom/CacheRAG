#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int n;
	scanf("%d", &n);
	rep(i, n){
		double xa, ya, ra, xb, yb, rb;
		scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &ra, &xb, &yb, &rb);

		double dist = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
		if(dist > ra+rb)
			puts("0");
		else if(dist+ra < rb)
			puts("-2");
		else if(dist+rb < ra)
			puts("2");
		else
			puts("1");
	}

	return 0;
}