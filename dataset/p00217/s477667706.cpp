#include <bits/stdc++.h>
#define log(x) cout<<x<<endl
#define pb push_back
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;
using Graph=vector<vector<int>>;

int gcd(lint x, lint y){
  return y==0 ? x:gcd(y,x % y);
}

int digsum(int n) {
  int res = 0;
  while(n > 0) {
    res += n%10;
    n /= 10;
  }
  return res;
}

int dignum(int n) {
  int res = 0;
  while(n > 0) {
    res++;
    n /= 10;
  }
  return res;
}

int stringcount(string s, char c) {
  return count(s.cbegin(), s.cend(), c);
}

int lcm(lint x, lint y){
  return x/ gcd(x, y) * y;
}

int combi(int n, int r){
  int num = 1;
  for(int i = 1; i <= r; i++){
    num = num * (n - i + 1) / i;
  }
  return num;
}

int main(){
  vector<pair<int,int>> resu;
  for(int i=0;i<55;i++){
    int n;cin>>n;
    if(n==0) break;
    vector<int> l;
    map<int,int> m;
    for(int j=0;j<n;j++){
      int p,a,b,all;
      cin>>p>>a>>b;
      all=a+b;
      l.pb(all);
      m[all]=p;
    }
    sort(all(l),greater<int>());
    pair<int,int> g;
    int num=l[0];
    g.first=m[num];
    g.second=num;
    resu.pb(g);
  }
  for(int i=0;i<resu.size();i++){
    cout<<resu[i].first<<" "<<resu[i].second<<endl;
  }
}
