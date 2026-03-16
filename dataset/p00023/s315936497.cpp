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
  cin>>n;
  rep(i,n){
    double xa,ya,ra,xb,yb,rb;
    cin>>xa>>ya>>ra>>xb>>yb>>rb;
    double dist=hypot(abs(xa-xb),abs(ya-yb));
    if(dist>ra+rb)cout<<0<<endl;
    else if(dist+rb<ra)cout<<2<<endl;
    else if(dist+ra<rb)cout<<-2<<endl;
    else cout<<1<<endl;
  }
}