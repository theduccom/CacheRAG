#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

bool isp(int n){
    if(n==2)return true;
    if(n==1)return false;
    if(n==0)return false;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    int n,x;
    while(cin>>n>>x){
        if(n==0&&x==0)break;
        
        int data[40];
        rep(i,n){
            cin>>data[i];
        }
        
        bool dp[1000001]={};
        rep(i,1000001)dp[i]=false;
        
        dp[0]=true;
        

        for(int i=1;i<=n;i++){
            for(int j=0;j<=x;j++){
//                dp[i][j] = dp[i-1][j];
                if(j-data[i-1]>=0)
                    dp[j] |= dp[j-data[i-1]];

            }
        }
        int ans = -1;
        for(int i=x;i>=0;i--){
            if(dp[i]==true){
                if(isp(i)){
                    ans=i;
                    break;
                }
            }
        }
        if(ans==-1)cout<<"NA"<<endl;
        else cout<<ans<<endl;
        
    }
}