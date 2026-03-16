#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define reps(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reps(i,0,n)

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;

const int INF = 1001001001;

int main()
{
	int w;
	while(scanf("%d", &w), w!=-1){
		const int cost[] = {0, 125, 140};
		int c = 1150;
		rep(i, 3){
			int d = min(10, w);
			w -= d;
			c += d * cost[i];
		}
		c += w * 160;
		printf("%d\n", 4280-c);
	}
	return 0;
}