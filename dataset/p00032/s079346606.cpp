#include<functional>
#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

signed main(){
  int a,b,c;
  char k;
  int ans1=0,ans2=0;
  while(cin>>a>>k>>b>>k>>c){
    if((a*a+b*b)==c*c)ans1++;
    else if(a==b)ans2++;
  }
  cout<<ans1<<endl;
  cout<<ans2<<endl;
  
  return 0;
}