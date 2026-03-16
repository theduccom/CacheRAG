#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int dp[1001][1001];
int main(){
    int cnt=0;
    int N,W;
    int w[1000],v[1000];
    while(cin>>W,W){
        cnt++;
        cin>>N;
        fill(dp[0],dp[0]+1001*1001,-1);
        dp[0][0]=0;
        for(int i=0;i<N;i++)(cin>>v[i]).ignore()>>w[i];
        for(int i=0;i<N;i++){
            for(int j=0;j<=W;j++){
                int res;
                if(j-w[i]<0)res=dp[i][j];
                else if(dp[i][j-w[i]]==-1)res=dp[i][j];
                else res=max(dp[i][j],dp[i][j-w[i]]+v[i]);
                dp[i+1][j]=res;
            }
        }
        for(int i=W;i>=0;i--){
            if(dp[N][i]!=-1&&dp[N][i]>dp[N][i-1]){
                cout<<"Case "<<cnt<<":"<<endl;
                cout<<dp[N][i]<<endl<<i<<endl;
                break;
            }
        }
    }
    return 0;
}