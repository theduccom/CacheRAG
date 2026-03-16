#include<iostream>
#include<cstdio>
using namespace std;
const int INF=-1;
int main(){
    int W,cnt=0;
    while(cin>>W,W){
        cnt++;
        int dp[1001],n;
        cin>>n;

        for(int i=0;i<1001;i++)dp[i]=INF;

        dp[0]=0;
        for(int i=0;i<n;i++){
            int v,w;
            scanf("%d,%d",&v,&w);
            for(int j=W;j>=0;j--){
                if(dp[j]==INF)continue;
                if(j+w>W)continue;
                dp[j+w]=max(dp[j+w],dp[j]+v);

            }
        }
        pair<int,int>P;
        P.first=0;
        for(int i=0;i<=W;i++){
            if(dp[i]>P.first){
                P.first=dp[i];
                P.second=i;
            }
        }
        cout<<"Case "<<cnt<<":"<<endl;
        cout<<P.first<<endl<<P.second<<endl;
    }
    return 0;

}