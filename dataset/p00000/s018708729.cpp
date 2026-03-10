#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <iterator>
#include <queue>
#include <stack>
#include <deque>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <string>
#include <cmath>
#include <complex>
#include <functional>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <cstdlib>
#include <cctype>
#define REP(i,m,n) for(int i=m;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define rp(i,c) rep(i,(int)c.size())
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define mp make_pair
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define rall(u) (u).rbegin(),(u).rend()
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl
#define v_delete(a,b) (a).erase(remove((a).begin(), (a).end(), b), (a).end())
#define v_unique(a) (a).erase(unique((a).begin(), (a).end()), (a).end())
#define VV(T) vector<vector< T > >
#define init(a,b) memset((a), (b), sizeof((a)))
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int inf=1<<28;
const double INF=1e10,EPS=1e-9;


template<class T>int SIZE(T a){return a.size();}
template<class T>string IntToString(T num){string res;stringstream ss;ss<<num;return ss.str();}
template<class T>T StringToInt(string str){T res=0;for(int i=0;i<SIZE(str);i++)res=(res*10+str[i]-'0');return res;}
template<class T>T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template<class T>T lcm(T a,T b){return a/gcd(a,b)*b;}

template <class T> void input(T& a, int n) { for (int i = 0; i < n; ++i) cin >> a[i]; }
template <class T> void input(T* a, int n) { for (int i = 0; i < n; ++i) cin >> a[i]; }
typedef pair<int,int> pii;

inline bool IN(int x, int y, int w, int h)
{
    return 0 <= x && x < w && 0 <= y && y < h;
}


int main()
{
	REP(i,1,10){
		REP(j,1,10){
			cout << i << "x" << j << "=" << i*j << endl;
		}
	}
	return 0;
}