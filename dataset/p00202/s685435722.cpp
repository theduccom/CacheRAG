#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define each(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define exist(s,e) ((s).find(e)!=(s).end())
#define range(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  range(i,0,n)
#define clr(a,b) memset((a), (b) ,sizeof(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

const double eps = 1e-10;
const double pi  = acos(-1.0);
const ll inf =1LL << 62;

const int maxn=1000010;
bool prime[maxn];
bool dp[maxn];

int main(void){
	for(int i=2;i<maxn;i++)
		prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i*i<maxn;i++)
		if(prime[i])
			for(int j=i*i;j<maxn;j+=i)
				prime[j]=false;

	int n,t;
	while(cin >> n >> t,n|t){
		clr(dp,0);
		dp[0]=true;
		int m;
		rep(i,n){
			cin >> m;
			rep(j,t+1){
				if(dp[j]&&j+m<=t)
					dp[j+m]=true;
			}
		}
		int ans=-1;
		rep(i,t+1)
			if(prime[i]&&dp[i])
				ans=i;
		if(ans!=-1)
			cout << ans << endl;
		else
			cout << "NA" << endl;
	}
	return 0;
}