#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef set<int> si;
typedef set<ll, ll> sll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<int, ll> mil;
typedef map<ll, int> mli;
typedef map<ll, ll> mll;

#define FOR(i, a, b) for(int i = (a), loop_end_##i=(b); i < (loop_end_##i); i++)
#define REP(i, n) FOR(i, 0, n)
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define SORT(c) sort((c).begin(),(c).end())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define PB push_back

#define dump(x)  cout << #x << " = " << (x) << endl
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl

#define rep(v,n) for(int v=0;v<n;v++)
#define input(t,v) t v;cin>>v;
#define input2(t,v1,v2) t v1,v2;cin>>v1>>v2;
#define input3(t,v1,v2,v3) t v1,v2,v3;cin>>v1>>v2>>v3;

template<class T> T read() {
	T t;
	cin >> t;
	return t;
}
char table[10][10]={"Close","Close","Close","Open","Open","!","!","!","!","!"};
int main(){
	input3(int,b1,b2,b3);
	int z=b1+2*b2+4*b3;
	cout<<table[z]<<endl;
	
}