#include "bits/stdc++.h"
#include <gmp.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> veci;
typedef vector<ll> vecll;
typedef vector<string> vecs;
template<class T,class U> using Hash=unordered_map<T,U>;

#define REP(i, a, n) for(ll i = a; i < (ll)n; i++)
#define RREP(i, a, n) for(ll i = n-1; i >= (ll)a; i--)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) RREP(i, 0, n)
#define MD 1000000007

template<class T> T read(){T a;cin >> a;return a;}
template<class T> void read(T& a){cin >> a;}
template<class T, class ...Args> void read(T& a, Args&... args){cin >> a; read(args...);} 
template<class T> void rarr(T a, int n){for(int i = 0; i < n; i++) {cin >> a[i];}}
template<char c = ' ',class T> void write(T a){cout << setprecision(12) << a << endl;}
template<char c = ' ',class T,class ...Args> void write(T a, Args... args){cout << setprecision(12) << a << c; write<c>(args...);}
template<class T> void warr(vector<T> a, const char* c = " "){cout << a[0];for(int i = 1; i < (int)a.size(); i++)cout << c << a[i];cout << endl;;}
template<class T> void warr(T a, int n, const char* c = " "){cout << a[0];for(int i = 1; i < n; i++)cout << c << a[i];cout << endl;}
void split(string s, string delim, veci& result){result.clear();string::size_type pos = 0;while(pos != string::npos){string::size_type p = s.find(delim, pos);if(p == string::npos){result.push_back(atoi(s.substr(pos).data()));break;}else {result.push_back(atoi(s.substr(pos, p - pos).data()));}pos = p + delim.size();}}
void split(string s, string delim, vecs& result){result.clear();string::size_type pos = 0;while(pos != string::npos){string::size_type p = s.find(delim, pos);if(p == string::npos){result.push_back(s.substr(pos));break;}else {result.push_back(s.substr(pos, p - pos));}pos = p + delim.size();}}
ll gcd(ll a, ll b){while(true){ll k = a % b;if(k == 0)return b;a = b;b = k;}}
ll comb(ll n, ll m){ll p=1;m=min(m,n-m);for(ll i=1;i<=m;i++){p*=n-i+1;p/=i;}return p;}

int main(void)
{
    REP(i,1,10)REP(j,1,10){
        cout<<i<<"x"<<j<<"="<<i*j<<endl;
    }
    return 0;
}