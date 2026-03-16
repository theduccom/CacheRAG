#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;

int main(){
	int ans=0;
	string s;
	while(cin>>s){
		//if(s=="0") break;
		bool f=0;
		rep(i,0,s.size()/2){
			if(s[i]!=s[s.size()-1-i]) f=1;
		}
		if(f==0) ans++;
	}
	o(ans);
}