#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	map<string,vi> m;
	string s;
	int a;
	while(cin>>s>>a){
		m[s].pb(a);
	}
	for(map<string,vi>::iterator it=m.begin();it!=m.end();it++){
		o(it->fi);
		vi v = it->se;
		sort(all(v));
		rep(i,0,v.size()){
			cout<<v[i];
			if(i!=v.size()-1) cout<<" ";
		}
		cout<<endl;
	}
}