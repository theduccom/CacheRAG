#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (int) (l);i < (int) (r);i++)
#define ALL(x) x.begin(),x.end()
template<typename T> bool chmax(T& a,const T& b){ return a < b ? (a = b,true) : false; }
template<typename T> bool chmin(T& a,const T& b){ return b < a ? (a = b,true) : false; }
typedef long long ll;

int W,N;
int dp [1001] [1001];

int main()
{
	int testCase = 1;
	while(scanf("%d",&W),W){
		scanf("%d",&N);
		vector<int> x(N),y(N);
		FOR(i,0,N){
			scanf("%d,%d",&x [i],&y [i]);
		}
		memset(dp,0,sizeof(dp));
		FOR(i,0,N) FOR(j,0,W + 1){
			chmax(dp [i + 1] [j],dp [i] [j]);
			if(j + y [i] <= W) chmax(dp [i + 1] [j + y [i]],dp [i] [j] + x [i]);
		}
		pair<int,int> ans(-1,-1);
		FOR(j,0,W + 1){
			if(dp [N] [j] > ans.first){
				ans.first = dp [N] [j];
				ans.second = j;
			}
		}
		printf("Case %d:\n",testCase);
		printf("%d\n",ans.first);
		printf("%d\n",ans.second);
		testCase++;
	}

	return 0;
}