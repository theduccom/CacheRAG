#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<bitset>
using namespace std;
const int dx[] = {1,0,-1,0};
const int dy[] = {0,1,0,-1};
#define INF 1e+8
#define EPS 1e-10
#define PB push_back
#define fi first
#define se second
#define ll long long 
#define reps(i,j,k) for(int i = (j); i < (k); i++)
#define rep(i,j) reps(i,0,j)
typedef pair<int,int> Pii;
typedef vector<int> vi;
bool PRIME[1000001];
void Prime(){ 
    PRIME[0]=PRIME[1]=true; 
    for(int i=2;i*i <= 1000000 ;i++){ 
        if(PRIME[i]==false){ 
            for(int j=i*i ; j<=1000000 ; j+=i){ 
                PRIME[j] = true; 
            } 
        } 
    } 
    return; 
}
int main(){
	Prime();
    int n,x;
    while(scanf("%d%d",&n,&x),n){
        int goods[32]={0};
		int dp[1000001]={0};
		int ans = -1;
        rep(i,n){
            scanf("%d",&goods[i]);
        }
        sort(goods,goods+n);
		rep(i,n){
			reps(j,goods[i],x+1){
				if(dp[j] < dp[j-goods[i]]+goods[i]){
					dp[j] = dp[j-goods[i]]+goods[i];
					if(!PRIME[dp[j]])ans = max(ans,dp[j]);
				}
			}
		}
		ans == -1 ? puts("NA") : printf("%d\n",ans);
	}
    return 0;
}