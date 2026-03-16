#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,s,n) for(int i = s; i < n; i++)
#define all(x) (x).begin(),(x).end()
typedef long long ll;
using Graph = vector<vector<pair<int,int>>>;
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
int main(){
  while(true){
    int n;
    cin >> n;
    if(n == 0)return 0;
    vector<int>cnt(10);
    rep(i,n){
      int tmp;
      cin >> tmp;
      cnt[tmp]++;
    }
    rep(i,10){
      if(cnt[i] == 0)cout << "-" << endl;
      else{
        rep(j,cnt[i])cout << "*";
        cout << endl;
      }
    }
  }
  return 0;
}

