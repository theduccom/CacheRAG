#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define drep(n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define Sort(x) sort((x).begin(),(x).end())
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

ll gcd(ll a,ll b){
    if(a<b){
        int t=a;a=b;b=t;
    }
    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}

ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

bool isPrime(int x){
    if(x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    for(int i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return false;
    }
    return true;
}

int kaizyo(int x){
    if(x==1)return x;
    else return x*kaizyo(x-1);
}


int main() {
    int n;
    vi ans;
    vi v;
    rep(i,0,10)v.pb(pow(2,i));
    
    while(cin>>n){
        for(int i=9;i>=0;i--){
            if(n>=v[i]){
                n-=v[i];
                ans.pb(v[i]);
            }
        }
    
        for(int i=ans.size()-1;i>=0;i--){
            if(i==0)cout<<ans[i];
            else cout<<ans[i]<<" ";
        }
        cout<<endl;
        ans.clear();
    }
  
    return 0;
}

