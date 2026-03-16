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
	int j=0;
	while(cin>>s){
		int k=0;
		string ans;
		while(k<s.size()){
			if(s[k]=='@'){
				REP(i,(s[k+1]-'0')){
					ans+=s[k+2];
				}
				k+=3;
			}else{
				ans+=s[k];
				k++;
			}
		}
		cout<<ans<<endl;
	}
}