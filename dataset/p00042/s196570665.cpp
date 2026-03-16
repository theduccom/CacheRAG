#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>
#include<set>
 
using namespace std;
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define INF 1<<25
 
typedef long long ll;

int dy[8]={1,1,1,0,0,-1,-1,-1};
int dx[8]={-1,0,1,-1,1,-1,0,1};
struct S{
	int a,b,c;
};
bool asc(const S& left,const S& right){
	return left.c > right.c;
}

int W,N;
int v[1001],w[1001];
int dp[1001][1001];

int main(){
	int cnt=1;
	char tmp;
	while(cin>>W){
		if(W==0)break;
		cin>>N;
		rep(i,N)cin>>v[i]>>tmp>>w[i];
		REP(i,1,N+1){
			rep(j,W+1){
				if(w[i-1]<=j)
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
				else 
					dp[i][j]=dp[i-1][j];
			}
		}
		int ans_v=0,ans_w=0;
		rep(i,W+1){
			if(dp[N][i]>ans_v){
				ans_v=dp[N][i];
				ans_w=i;
			}
		}
		cout<<"Case "<<cnt<<":"<<endl;
		cout<<ans_v<<endl;
		cout<<ans_w<<endl;
		cnt++;
	}
	return 0;
}