 
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
using mii=map<int,int>;
using psi=pair<string,int>;
using pii=pair<int,int>;
using vlai=valarray<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define MOD (1e9+7)
void get(){}template<class H,class...T>void get(H&h,T&...t){cin>>h;get(t...);}
template<class T>void geti(T&a){for(auto&_:a)cin>>_;}
template<class T>void getii(T&a){for(auto&_:a)geti(_);}
void put(string d){}template<class H,class...T>void put(string d,H&h,T&...t){cout<<h;if(sizeof...(t))cout<<d;put(d,t...);}
template<class T>void puti(T&a,string d=" "){bool f=1;for(auto&_:a)cout<<(exchange(f,0)?"":d)<<_;cout<<endl;}
template<class T>void putii(T&a,string d=" "){for(auto&_:a)puti(_,d);}
#define dcl(...) ll __VA_ARGS__;get(__VA_ARGS__)
#define dclt(t,...) t __VA_ARGS__;get(__VA_ARGS__)

int main(){
	vi a(8);
	vvi vec{
		{1,4},
		{0,2,5},
		{1,3,6},
		{2,7},
		{0,5},
		{1,4,6},
		{2,5,7},
		{3,6},
	};
	map<vi,int> m;
	iota(all(a),0);
	queue<pair<vi,pii>> q;
	q.emplace(a,mp(0,0));
	while(!q.empty()){
		vi data=q.front().fs;
		int cost=q.front().sc.fs;
		int zero=q.front().sc.sc;
		q.pop();
		if(m.find(data)!=m.end()){
			continue;
		}
		m[data]=cost;
		for(int i:vec[zero]){
			auto cp=data;
			cp[zero]=cp[i];
			cp[i]=0;
			q.emplace(cp,mp(cost+1,i));
		}
	}

	while(cin>>a[0]){
		range(i,1,8)cin>>a[i];
		cout<<m[a]<<endl;
	}
	return 0;
}

