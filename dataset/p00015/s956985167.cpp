#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n;scanf("%d",&n);
	rep(i,n){
		string s,t;cin>>s>>t;
		string ans;
		int back=0;
		for(int j=1;j<=min(s.size(),t.size());j++){
			int d=s[s.size()-j]-'0'+t[t.size()-j]-'0'+back;
			ans=(char)(d%10+'0')+ans;
			back=d/10;
		}
		string u;
		if(s.size()>t.size())u=s;
		else u=t;
		for(int j=min(s.size(),t.size())+1;j<=u.size();j++){
			int d=u[u.size()-j]-'0'+back;
			ans=(char)(d%10+'0')+ans;
			back=d/10;
		}
		if(back)ans='1'+ans;
		if(ans.size()>80)puts("overflow");
		else cout<<ans<<endl;
	}
}