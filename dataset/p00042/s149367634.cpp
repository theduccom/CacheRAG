#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

int dp[1001][10001];    //dp[i][j]  i番目以前の物で、重さがj以下の時の価値
int W[1001],V[1001];

int w,n;

void solve(){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=w;j++){
            if(j-W[i]<0){
                dp[i][j]=dp[i+1][j];
            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i+1][j-W[i]]+V[i]);
            }
            
        }
    }
    
    cout<<dp[0][w]<<endl;
    for(int i=w;i>=1;i--){
        if(dp[0][i]!=dp[0][i-1]){
            cout<<i<<endl;
            break;
        }
    }
}

int main(){
    int count=1;
    while(1){
        memset(dp,0,sizeof(dp));
    
        cin>>w>>n;
        if(w==0)break;
        char a;
        rep(i,n)cin>>V[i]>>a>>W[i];
    
        cout<<"Case "<<count<<":"<<endl;
        count++;
        solve();
    }
    return 0;
}