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
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		pii d[10001]={};
		int p,a,b;
		rep(i,0,n){
			cin>>p>>a>>b;
			d[i].fi=a+b; d[i].se=p;
		}
		sort(d,d+n);
		reverse(d,d+n);
		o(d[0].se<<" "<<d[0].fi);
	}
}