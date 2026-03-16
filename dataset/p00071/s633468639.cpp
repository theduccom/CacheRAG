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
  int i,j,k;
  int n;
  cin>>n;
  rep(k,n){
    cin.ignore();
    vector<string> v(10);
    rep(i,8)
      cin>>v[i];
    int x,y;
    cin>>x>>y;
    x--;y--;
    queue<pii> q;
    q.push(pii(x,y));
    while(q.size()){
      x=q.front().first;
      y=q.front().second;
      q.pop();
      v[y][x]='0';
      for(i=1;i<4;i++){
        if(y-i>=0 && v[y-i][x]=='1')q.push(pii(x,y-i));
        if(y+i<8 && v[y+i][x]=='1')q.push(pii(x,y+i));
        if(x-i>=0 && v[y][x-i]=='1')q.push(pii(x-i,y));
        if(x+i<8 && v[y][x+i]=='1')q.push(pii(x+i,y));
      }
    }
    cout<<"Data "<<k+1<<':'<<endl;
    rep(i,8)
      cout<<v[i]<<endl;
  }
}