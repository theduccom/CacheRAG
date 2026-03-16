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
	int n;
	cin>>n;
	string s;
	rep(i,0,n){
		cin>>s;
		sort(all(s));
		int min=0,max=0;
		rep(j,0,8){
			min+=(s[j]-'0')*pow(10,7-j);
		}
		reverse(all(s));
		rep(j,0,8){
			max+=(s[j]-'0')*pow(10,7-j);
		}
		o(max-min);
	}
}