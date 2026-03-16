#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001],wait[1001],value[1001];
int power(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)num*=10;
    return num;
}
int main()
{
    int n,w,point,num=1,wa=0;
    char c;
    while(cin>>w&&w!=0){
        cin>>n;
        for(int i=0;i<n;i++)cin>>value[i]>>c>>wait[i];
        memset(dp,0,sizeof(dp));
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=w;j++){
                if(j<wait[i])dp[i][j]=dp[i+1][j];
                else dp[i][j]=max(dp[i+1][j],dp[i+1][j-wait[i]]+value[i]);
            }
        }
        int wa=0,point=0;
        for(int i=0;i<=w;i++)if(dp[0][wa]<dp[0][i])wa=i;
        cout<<"Case "<<num<<":\n"<<dp[0][w]<<endl<<wa<<endl;
        num++;
    }
}