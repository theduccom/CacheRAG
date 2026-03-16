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
  vi v(3);
  while(1){
    cin>>v[0]>>v[1]>>v[2];
    if(v[0]==0 && v[1]==0 && v[2]==0)break;
    sort(all(v));
    int n;
    cin>>n;
    double len=hypot(v[0],v[1])/2;
    rep(i,n){
      int r;
      cin>>r;
      if(r>len)cout<<"OK"<<endl;
      else cout<<"NA"<<endl;
    }
  }
}