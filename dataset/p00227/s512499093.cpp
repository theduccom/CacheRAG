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
	int n,m;
	while(1){
		int ans=0;
		cin>>n>>m;
		if(n==0 && m==0) break;
		vi d(n);
		rep(i,0,n){
			cin>>d[i]; ans+=d[i];
		}
		sort(all(d));
		reverse(all(d));
		rep(i,0,n){
			if((i+1)%m==0) ans-=d[i];
		}
		o(ans);
	}	
}