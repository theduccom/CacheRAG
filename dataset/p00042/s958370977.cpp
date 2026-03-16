#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>
#include<stack>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

int dp[1010][1010][2];

int main() {
	int w,n,num=0;;
	while(w=in(),w){
		n=in();
		memset(dp,0,sizeof(dp));
		int a,b,i;
		for(i=0;i<n;i++){
			scanf("%d,%d",&a,&b);
			int k;
			for(k=0;k<b;k++){
				dp[i+1][k][0]=dp[i][k][0];
				dp[i+1][k][1]=dp[i][k][1];
			}
			for(k=b;k<=w;k++){
				if(dp[i][k][0]<dp[i][k-b][0]+a
				||dp[i][k][0]==dp[i][k-b][0]+a&&dp[i][k][1]>dp[i][k-b][1]+b){
					dp[i+1][k][0]=dp[i][k-b][0]+a;
					dp[i+1][k][1]=dp[i][k-b][1]+b;
				}else{
					dp[i+1][k][0]=dp[i][k][0];
					dp[i+1][k][1]=dp[i][k][1];
				}
			}
			//cout<<dp[w]<<endl;
		}
		cout<<"Case "<<++num<<":"<<endl;
		cout<<dp[n][w][0]<<endl;
		cout<<dp[n][w][1]<<endl;
	}
	return 0;
}