#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <string>
#include <complex>
#include <functional>
using namespace std;
typedef pair<int,int> P;
double dat[100][100];
int dp[1000001];//動的計画法
int prime[1000001];
int main(){
    prime[0]=prime[1]=-1;//作る
    for(int i=2;i<=1000000;i++){
        if(prime[i]!=-1){
            prime[i]=1;
            for(int j=i+i;j<=1000000;j+=i)prime[j]=-1;
        }
    }
    int n,x;
    int p[31];
    while(cin>>n>>x,n){
        int ans=0,cnt=0;
        for(int i=0;i<n;i++){
            cin>>p[i];
            if(p[i]%2==0) cnt++;
        }
        if(cnt==n){
            cout<<"NA"<<endl;
            continue;
        }
        dp[0]=1;
        for(int i=1;i<=x;i++) dp[i]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=x;j++){
                if(p[i]<=j&&dp[j-p[i]])dp[j]=1;
            }
        }
        int ch=0;
        for(int j=x;j>=0;j--){
            if(prime[j]==1&&dp[j]==1){
                ch++;
                cout<<j<<endl;
                break;
            }
        }
        if(ch==0)cout<<"NA"<<endl;
    }
    return 0;
}
