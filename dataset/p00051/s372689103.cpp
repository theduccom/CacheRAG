#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;


signed main(){
  int n;
  cin>>n;
  rep(i,n){
    string s,t,u;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)t+=s[i];
    for(int i=s.size()-1;i>=0;i--)u+=s[i];
    int a=stoi(t);int b=stoi(u);
    cout<<abs(a-b)<<endl;
  }
  return 0;
}