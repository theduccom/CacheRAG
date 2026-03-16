#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	double highest = -1.0, lowest = -1.0;
	double h;
	while(scanf("%lf", &h) != EOF){
		if(highest == -1.0 || highest < h)
			highest = h;
		if(lowest == -1.0 || h < lowest)
			lowest = h;
	}

	printf("%f\n", highest-lowest);

	return 0;
}