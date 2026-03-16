#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#define INF 1000000000ll
#define MOD 1000000007ll
#define EPS 1e-8
#define REP(i, m) for(long long i=0; i<m; ++i)
#define FOR(i, n, m) for(long long i=n; i<m; ++i)
#define ALL(v) v.begin(), v.end()
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;

int main() {
	ios::sync_with_stdio(false);
	map<vector<int>, int> d;
	vector<int> perm={0,1,2,3,4,5,6,7};
	do {
		d[perm]=INF;
	} while(next_permutation(ALL(perm)));
	queue<vector<int> > q;
	vector<int> res={0,1,2,3,4,5,6,7};
	d[res]=0;
	q.push(res);
	while(!q.empty()) {
		vector<int> p=q.front();
		q.pop();
		REP(i,8) {
			int buf=d[p];
			if(p[i]==0) {
				vector<int> np=p;
				if(i>0&&i/4==(i-1)/4) {
					swap(np[i],np[i-1]);
					if(d[np]==INF) {
						d[np]=buf+1;
						q.push(np);
					}
				}
				if(i<7&&i/4==(i+1)/4) {
					vector<int> np=p;
					swap(np[i],np[i+1]);
					if(d[np]==INF) {
						d[np]=buf+1;
						q.push(np);
					}
				}
				if(i+4<8) {
					vector<int> np=p;
					swap(np[i],np[i+4]);
					if(d[np]==INF) {
						d[np]=buf+1;
						q.push(np);
					}
				}
				if(i-4>=0) {
					vector<int> np=p;
					swap(np[i],np[i-4]);
					if(d[np]==INF) {
						d[np]=buf+1;
						q.push(np);
					}
				}
			}
		}
		;;}
	while(1) {
		vector<int> s(8);
		cin>>s[0];
		if(cin.eof()) break;
		FOR(i,1,8) cin>>s[i];
		cout<<d[s]<<endl;
	}
}