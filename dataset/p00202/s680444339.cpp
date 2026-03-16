#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999

bool era[10000001]={false};


void makeERA(){
    for(int i=2;i<10000001;i++){
        if(era[i]==true){
            int x=10000000/i;
            for(int j=2;j<=x;j++){
                era[i*j]=false;
            }
        }
    }
    era[2]=true;
}


int main(){
    for(int i=0;i<10000001;i++)era[i]=true;
    era[0]=false;era[1]=false;
    makeERA();

    int n,x;
    while(cin>>n>>x){
        if(n==0&&x==0)break;
        vector<int> data(n);
        rep(i,n) cin>>data[i];
        
        static bool dp[1000100];
        rep(i,1000100)dp[i] = false;
        dp[0] = true;
        
        rep(i,n){
            int val = data[i];
            rep(j,x+1){
                if(j-val>=0) dp[j] |= dp[j-val];
            }
        }
        for(int i=x;i>=0;i--){
            if(era[i]&&dp[i]){
                cout<<i<<endl;
                goto next;
            }
        }
        cout<<"NA"<<endl;
    next:;
    }
}