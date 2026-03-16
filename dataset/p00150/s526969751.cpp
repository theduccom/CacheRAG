#pragma GCC optimize "-O3"
#pragma GCC target ("avx")
#define _USE_MATH_DEFINES
#include<numeric>
#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(int i=0;i<n;++i)
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pi pair<int,int>
#define vp vector<pair<int,int>>
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define MEMSET(a) memset(a,0,sizeof(a))
#define inf (1ll<<60)
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v),greater<int>())
#define SPEED ios::sync_with_stdio(false);cin.tie(0);cout<<fixed<<setprecision(12)
signed gcd(int a, int b){return b?gcd(b,a%b):a;}
signed lcm(int a, int b){return a*b/(a,b);}
//priority_queue<int, vi, greater<int> > que;//æ˜‡é †

using namespace std;

const int mod=1e9+7;
bool isSosuu(int n);
signed main(){
  SPEED;
  int n;
  while(1){
    int n=0;
    cin >> n;
    if(n==0)return 0;
    for(int i=(n-2);i>1;i--){
      if(isSosuu(i)&&isSosuu(i+2)){
        cout << i << " " << i+2 << endl;
        break;
      }
    }
  }
  return 0;
}
bool isSosuu(int num){
  if (num < 2) return false;
      else if (num == 2) return true;
      else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

      double sqrtNum = sqrt(num);
      for (int i = 3; i <= sqrtNum; i += 2)
      {
          if (num % i == 0)
          {
              // 素数ではない
              return false;
          }
      }

      // 素数である
      return true;
}

