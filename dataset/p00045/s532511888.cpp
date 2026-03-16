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
	int vsum=0, csum=0;
	int v, c, cnt;
	for(cnt=0; scanf("%d,%d", &v, &c) != EOF; ++cnt){
		vsum += v*c;
		csum += c;
	}

	printf("%d\n%d\n", vsum, (int)((double)csum/cnt+0.5));

	return 0;
}