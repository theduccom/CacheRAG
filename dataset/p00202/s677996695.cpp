#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
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
	int n;
	while(scanf("%d", &n), n){
		int x;
		scanf("%d", &x);
		
		int p[30];
		rep(i, n)
			scanf("%d", &p[i]);
		
		bool dp[1000001] = {false};
		dp[0] = true;
		reps(i, 1, x+1){
			rep(j, n)
				dp[i] |= i>=p[j] && dp[i-p[j]];
		}
		
		bool isprime[1000001];
		fill(isprime, isprime+x+1, true);
		isprime[0] = isprime[1] = false;
		reps(i, 2, x){
			if(isprime[i]){
				for(int j=i*2; j<=x; j+=i)
					isprime[j] = false;
			}
		}
		
		int ans = -1;
		for(int i=x+1; i>=0; --i){
			if(dp[i] && isprime[i]){
				ans = i;
				break;
			}
		}
		if(ans == -1)
			puts("NA");
		else
			printf("%d\n", ans);
	}
	
	return 0;
}