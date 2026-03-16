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
  while(1){
    int h,w;
    cin>>h>>w;
    if(h==0 && w==0)break;
    char v[100][100];
    rep(i,h)scanf("\n%s",v[i]);
    int used[100][100]={};
    i=0;j=0;
    bool ans=true;
    while(1){
      if(used[i][j]){
        ans=false;
        break;
      }
      used[i][j]++;
      if(v[i][j]=='>')j++;
      else if(v[i][j]=='<')j--;
      else if(v[i][j]=='^')i--;
      else if(v[i][j]=='v')i++;
      else break;
    }
    if(ans)cout<<j<<" "<<i<<endl;
    else cout<<"LOOP"<<endl;
  }
}