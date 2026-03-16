#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define rep(i,n) REP(i, 0, n)
#define pb push_back
//#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 

 
const int INF = 1000000;
const double EPS = 1e-8;
const int mod = 1e9 + 7;

int vtoi(vi v){
	int ret = 0, p = 1;
	for(int i = 0; i < v.size(); i++){
		ret += v[i] * p;
		p *= 8;
	}
	return ret;
}

vi itov(int n){
	vi ret(8, 0);
	int idx= 0;
	while(n > 0){
		ret[idx] = n % 8;
		n /= 8;
		idx++;
	}
	return ret;
}

vector<int> get_nexts(vi v){
	vi ret;
	for(int i = 0; i < v.size(); i++){
		if(v[i]!=0) continue;
		if(i % 4 != 0){
			swap(v[i], v[i-1]);
			ret.pb(vtoi(v));
			swap(v[i], v[i-1]);
		}
		if(i % 4 != 3){
			swap(v[i], v[i+1]);
			ret.pb(vtoi(v));
			swap(v[i], v[i+1]);
		}
		if(i /4 == 0){
			swap(v[i], v[i+4]);
			ret.pb(vtoi(v));
			swap(v[i], v[i+4]);
		}
		else{
			swap(v[i], v[i-4]);
			ret.pb(vtoi(v));
			swap(v[i], v[i-4]);
		}
		return ret;
	}
	return ret;
}

map<int, int> mp;

void print(vi v){
	for(int i = 0; i < v.size(); i++){
		cout<<" "<<v[i];
	}
	cout<<endl;
}

int main(){
	vi a(8);
	rep(i, 8) a[i] = i;
	queue<pii> q;
	q.push(pii(0, vtoi(a)));
	mp[vtoi(a)] = 0;
	pii p;
	int c, t;
	vi nexts;
	while(!q.empty()){
		p = q.front(); q.pop();
		a = itov(p.se);
		c = p.fi;
		nexts = get_nexts(a);
		for(int i = 0; i < nexts.size(); i++){
			t = nexts[i];
			if(mp.find(t) != mp.end()) continue;
			mp[t] = c + 1;
			q.push(pii(c + 1, t));
			//print(itov(t));
		}
	}
	//cout<<mp.size()<<endl;
	vi d(8);
	while(cin>>d[0]){
		rep(i, 7) cin>>d[i+1];
		cout<<mp[vtoi(d)]<<endl;
	}
}