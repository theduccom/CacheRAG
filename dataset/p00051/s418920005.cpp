#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

int main(){
  int n;
  string s;
  cin>>n;
  rep(i,n){
    int maxi,mini;
    cin>>s;
    sort(all(s));
    mini=atoi(s.c_str());
    reverse(all(s));
    maxi=atoi(s.c_str());
    cout<<maxi-mini<<endl;
  }
  return 0;
}