#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=10000;
const ll INF=1000000010;
const ll LINF=1000000000000000010;
const int MAX=100001;
int dx[8]={0,1,0,-1,1,-1,1,-1};
int dy[8]={1,0,-1,0,1,-1,-1,1};
ll keta(ll n){
    int d=0;
    while(n>0){
        n/=10;
        d++;
    }
    return d;
}
int main(){
    int n;
    while(cin>>n,n){
        int a[12][12]={};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                a[i][n]+=a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[n][i]+=a[j][i];
            }
        }
        for(int i=0;i<n;i++){
            a[n][n]+=a[n][i];
        }
        for(int i=0;i<=n;i++,cout<<endl){
            for(int j=0;j<=n;j++){
                printf("%5d",a[i][j]);
            }
        }
    }
	return 0;
}

