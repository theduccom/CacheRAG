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
	int l;
	char c;
	string s;
	while(cin>>s){
		rep(i,0,s.size()){
			if(s[i]=='@'){
				l=s[i+1]-'0'; c=s[i+2];
				s.replace(i,3,l,c);
			}
		}
		o(s);
	}
}