#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
	string s;
	int n;
	map<string,vi> mp;
	vector<string> sent;

	while(cin>>s>>n){
		if(mp[s].size()==0)sent.pb(s);
		mp[s].pb(n);
	}

	sort(all(sent));
	rep(i,sent.size()){
		cout<<sent[i]<<endl;
		vi a;
		rep(j,mp[sent[i]].size()){
			a.pb(mp[sent[i]][j]);
		}
		sort(all(a));
		rep(i,a.size()){
			if(i!=0)cout<<" ";
			cout<<a[i];
		}
		cout<<endl;
	}

}