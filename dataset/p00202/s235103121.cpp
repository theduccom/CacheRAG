#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

typedef long long int64;

int main()
{
	static bool noprime[1000001] = {false};
	
	noprime[0] = true;
	for(int i = 2; i * i <= 1000000; ++i) {
	
		if(!noprime[i]) {
		
			for(int j = i * 2; j <= 1000000; j += i)
				noprime[j] = true;
		}
	}

	while(true) {
	
		int n, x;
		int v[30];
		
		scanf("%d%d", &n, &x);
		if(n == 0 && x == 0)
			break;
		for(int i = 0; i < n; ++i)
			scanf("%d", v + i);
			
		static bool dp1[1000001], dp2[1000001];
		bool *prev = dp1;
		bool *next = dp2;
		
		fill(dp1, dp1 + (x + 1), 0);
		fill(dp2, dp2 + (x + 1), 0);
		
		for(int i = 0; i < n; ++i) {
			
			next[0] = prev[0] = true;
		
			for(int c = 1; c <= x; ++c)
				next[c] = prev[c];
			
			for(int c = v[i]; c <= x; ++c)
				next[c] = (next[c] || next[c - v[i]]);
				
			swap(next, prev);
		}
		
		int ans = -1;
		
		for(int i = x; i > 0; --i) {
		
			if(!noprime[i] && prev[i]) {
				ans = i;
				break;
			}
		}
		
		if(ans < 0)
			printf("NA\n");
		else
			printf("%d\n", ans);
	}
	
	return 0;
}