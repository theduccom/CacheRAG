
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
  char s[10000];
  while(scanf("%s",s)!=EOF){
    int n=strlen(s);
    vi a(n);
    rep(i,n)
      if(s[i]=='I')a[i]=1;
      else if(s[i]=='V')a[i]=5;
      else if(s[i]=='X')a[i]=10;
      else if(s[i]=='L')a[i]=50;
      else if(s[i]=='C')a[i]=100;
      else if(s[i]=='D')a[i]=500;
      else if(s[i]=='M')a[i]=1000;
    int ans=0;
    rep(i,n-1)
      if(a[i]>=a[i+1])ans+=a[i];
      else ans-=a[i];
    cout<<ans+a[n-1]<<endl;
  }
}