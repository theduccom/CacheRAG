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
	int field[10][10];
	rep(i, 10)
		fill(field[i], field[i]+10, 0);

	int deepest = 0;
	int ans = 100;
	int x, y, s;
	while(scanf("%d,%d,%d", &x, &y, &s) != EOF){
		reep(i, -2, 3) reep(j, -2, 3){
			int py = i+y, px = j+x;
			if(py<0 || px<0 || 10<=py || 10<=px)
				continue;
			if(abs(i)+abs(j) >= 3)
				continue;
			if(s!=3 && (abs(i)==2 || abs(j)==2))
				continue;
			if(s==1 && abs(i)+abs(j)>=2)
				continue;

			ans -= !field[py][px];
			deepest = max(deepest, ++field[py][px]);
		}
	}
	printf("%d\n%d\n", ans, deepest);

	return 0;
}