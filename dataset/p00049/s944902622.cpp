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
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pf push_front
#define pb push_back
#define int long long
using namespace std;
const int INF=1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

signed main(){
  int a=0,b=0,ab=0,o=0;
  int x;
  char z;
  string y;
  while(cin>>x>>z>>y){
    if(y=="A")a++;
    else if(y=="B")b++;
    else if(y=="AB")ab++;
    else o++;
  }
  cout<<a<<endl;
  cout<<b<<endl;
  cout<<ab<<endl;
  cout<<o<<endl;
 return 0;
}