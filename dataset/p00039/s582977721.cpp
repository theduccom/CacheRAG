#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)

int main(){
	map<char,int> mp;
	mp['I']=1;
	mp['V']=5;
	mp['X']=10;
	mp['L']=50;
	mp['C']=100;
	mp['D']=500;
	mp['M']=1000;
	string s;
	while(cin>>s){
		int ans=0;
		rep(i,s.size()){
			if(i+1<s.size()&&mp[s[i]]<mp[s[i+1]])ans-=mp[s[i]];
			else ans+=mp[s[i]];
		}
		cout<<ans<<endl;
	}
}