#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<double,double> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
vector<bool> eratosthenes(int n){
    vector<bool> prime(n,true);
    prime[0]=false;prime[1]=false;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            for(int j=i*2;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    return prime;
}
int main(){
    vector<bool> p=eratosthenes(60000);
    int n;
    while(cin>>n){
        for(int i=n-1;i>=0;i--){
            if(p[i]){
                cout<<i<<" ";
                break;
            }
        }
        for(int i=n+1;i<=60000;i++){
            if(p[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
}

