#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define Sort(x) sort((x).begin(),(x).end())
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main() {
    int n;
    while(cin>>n){
    if(n==0)return 0;
    vector<pair<int,ll> > v;
    bool f=true;
    rep(i,0,n){
        int num;
        ll a,b;
        scanf("%d %lld %lld",&num,&a,&b);
        if(i==0)v.pb(mp(num,a*b));
        else {
            bool judge=true;
            rep(j,0,v.size()){
                if(num==v[j].fi) {
                    judge=false;
                    v[j].se+=a*b;
                }
            }
            if(judge)v.pb(mp(num,a*b));
        }
    }
    
    rep(i,0,v.size()){
        if(v[i].se>=1e6){
            cout<<v[i].fi<<endl;
            f=false;   
        }
    }
    if(f)cout<<"NA"<<endl;
    }
    
    return 0;
}


