#include <cstdio>
#include <stack>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

#define reep(i,f,t) for(int i=f ; i<int(t) ; ++i)
#define rep(i,n) reep(i, 0, n) 

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main()
{
	int n, m;
	while(scanf("%d%d", &n, &m), n){
		int a[1000];
		rep(i, n)
			scanf("%d", &a[i]);
		sort(a, a+n, greater<int>());
		int ans = 0;
		rep(i, n){
			if(i%m != m-1)
				ans += a[i];
		}
		printf("%d\n", ans);
	}
	return 0;
}