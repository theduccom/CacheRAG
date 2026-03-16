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
  int n,num=0;
  char s[50]={};
  vector<pair<string,int> > p;
  while(scanf("%s %d",s,&n)!=EOF){
      p.push_back(pair<string,int>(s,n));
      num++;
    }
  sort(all(p));
  cout<<p[0].first<<endl;
  cout<<p[0].second;
  for(i=1;i<num;i++){
    if(p[i].first!=p[i-1].first){
      cout<<endl;
      cout<<p[i].first<<endl;
      cout<<p[i].second;
    }
    else
      cout<<" "<<p[i].second;
  }
  cout<<endl;
}