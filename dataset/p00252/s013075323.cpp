#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int main(){
    int a,b,c;cin>>a>>b>>c;
    bool f=false;;
    if(a&&b){
        f=true;
    }
    if(c){
        f=true;
    }
    if(f){
        cout<<"Open"<<endl;
    }else{
        cout<<"Close"<<endl;
    }
}

