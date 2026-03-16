#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

const double pi = atan(1.0)*4.0;

int main()
{
	double x=0.0, y=0.0;
	double direct = pi / 2.0;
	int len, arg;
	while(scanf("%d,%d", &len, &arg), len||arg){
		x += cos(direct) * len;
		y += sin(direct) * len;
		direct -= arg/180.0*pi;
	}

	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}