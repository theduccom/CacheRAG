#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int l[11] = {0};
	while(1){
		if(scanf("%d,", &l[1]) == EOF)
			break;
		reep(i, 2, 11){
			scanf("%d,", &l[i]);
			l[i] += l[i-1];
		}

		int v1, v2;
		scanf("%d,%d", &v1, &v2);
		printf("%d\n", distance(l, lower_bound(l, l+11, l[10]/double(v1+v2)*v1)));
	}
	return 0;
}