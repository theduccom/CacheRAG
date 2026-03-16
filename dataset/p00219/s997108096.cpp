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
		vi d(10);
		int a;
		rep(i,0,n){
			cin>>a; d[a]++;
		}
		rep(i,0,10){
			if(d[i]==0) o('-');
			else{
				rep(j,0,d[i]) cout<<'*';
				cout<<endl;
			}
		}
	}
}