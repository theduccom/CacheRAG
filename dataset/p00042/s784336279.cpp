#include <stdio.h>
#include <string.h>

struct treasure {
	int w;
	int v;
	void operator+=(treasure t){
		*this = *this + t;
	}
	treasure operator+(treasure t){
		treasure tt;
		tt.v = this->v + t.v;
		tt.w = this->w + t.w;
		return tt;
	}
};

struct treasure t[1000];
struct treasure dp[1001][1001];
int n;

treasure max(treasure a, treasure b){
	if(a.v == b.v){
		return a.w <= b.w ? a : b;
	}else{
		return a.v >= b.v ? a : b;
	}
}

treasure calc(int i, int w){
	if(dp[i][w].v >=0){ return dp[i][w]; }
	struct treasure res;
	if(i == n){
		res.v = 0;
		res.w = 0;
	}else if(w < t[i].w){
		res += calc(i+1, w);
	}else{
		res = max(calc(i+1, w), calc(i+1, w-t[i].w) + t[i]);
	}
	return dp[i][w] = res;
}

int main(void){
	int w, c=1;
	struct treasure res;
	while(true){
		scanf("%d", &w);
		if(w == 0){ break; }
		scanf("%d", &n);
		for(int i=0; i<n; ++i){
			scanf("%d,%d", &(t[i].v), &(t[i].w));
		}
		memset(dp, -1, sizeof(dp));

		res = calc(0, w);
		printf("Case %d:\n", c++);
		printf("%d\n", res.v);
		printf("%d\n", res.w);
	}
	return 0;
}