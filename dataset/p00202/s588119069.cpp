#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool dp[1000001];
int main(){
    bool latte[1000001];
    fill(latte,latte+1000001,true);
    latte[0]=latte[1]=false;
    for(int i=2;i<=1000000;i+=2)latte[i]=false;
    for(int i=3;i<=1000000;i+=2){
        if(latte[i])
            for(int j=i+i;j<=1000000;j+=i)
                latte[j]=false;

    }
    int n,l;
    while(cin>>n>>l,n||l){
        int v[30];
        for(int i=0;i<n;i++)cin>>v[i];
        fill(dp,dp+l,false);
        dp[0]=true;
        for(int i=0;i<=l;i++){
            if(!dp[i])continue;
            for(int j=0;j<n;j++){
                int to=i+v[j];
                if(to>l)continue;
                dp[to]=true;
            }
        }
        bool NAFlag=true;
        for(int i=l;i>=0;i--){
            if(dp[i]&&latte[i]){
                cout<<i<<endl;
                NAFlag=false;
                break;
            }
        }
        if(NAFlag)cout<<"NA"<<endl;
    }

    return 0;
}