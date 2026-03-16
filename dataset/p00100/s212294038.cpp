#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j;
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    vector<ll> v(4005,0);
    vi e(n);
    rep(i,n){
      ll p,q;
      cin>>e[i]>>p>>q;
      v[e[i]]+=p*q;
    }
    vector<bool> used(4005,true);
    rep(i,n)
      if(v[e[i]]>=1000000 && used[e[i]]){
        cout<<e[i]<<endl;
        used[e[i]]=false;
        used[0]=false;
      }
    if(used[0])cout<<"NA"<<endl;
  }
}