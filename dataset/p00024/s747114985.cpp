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
	double v;
	while(scanf("%lf", &v) != EOF){
		double x = v*v/19.6;
		printf("%d\n", (int)ceil(x/5.0)+1);
	}

	return 0;
}