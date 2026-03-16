#include<cstdio>
#include<iostream>
#include<algorithm>
#define int long long
using namespace std;
int dp[1001],N,v[1001],w[1001],W;
signed main(){
    for(int l=1;;l++){
        fill(dp,dp+1001,0);
        /*fill(v,v+100,0);
        fill(w,w+100,0);*/
        cin>>W;
        if(W==0)break;
        cin>>N;
        for(int i=0;i<N;i++){
            scanf("%lld,%lld",&v[i],&w[i]);
        }
        for(int i=0;i<N;i++){
            for(int j=W;j>=w[i];j--){
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
            }
        }
        for(int i=W;i>=0;i--){
            if(dp[W]!=dp[i]){
                cout<<"Case "<<l<<":"<<endl<<dp[W]<<endl<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}