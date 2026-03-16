#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,b) FOR(i,0,b)
#define BE(c) c.begin(),c.end()
#define PB push_back
#define F first
#define S second
#define BEB(s) s
using namespace std;
int main(){
	string s;
	int ans=0;
	while(cin>>s){
		bool f=true;
		REP(i,s.size()/2){
			if(s[i]!=s[s.size()-i-1])f=false;
		}
		if(f)ans++;
	}
	cout<<ans<<endl;
	return 0;
}