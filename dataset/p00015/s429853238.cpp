#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


int main(){
	
	int n;
	cin>>n;
	
	rep(loop,n){
		vector<int> ans;
		vector<int> a;
		vector<int> b;
		
		string c,d;
		cin>>c>>d;
		
		rep(i,c.size()){
			a.push_back(c[c.size()-1-i]-'0');
		}
		rep(i,d.size()){
			b.push_back(d[d.size()-1-i]-'0');
		}
		
		
		int kuri = 0;
		while(!a.empty() || !b.empty() || kuri!=0){
			int sum = kuri;
			kuri = 0;
			
			if(!a.empty()){
				sum += a[0];
				a.erase(a.begin());
			}
			
			if(!b.empty()){
				sum += b[0];
				b.erase(b.begin());
			}
			
			ans.push_back(sum%10);
			kuri += sum/10;
		}
		
		if(ans.size()>80)puts("overflow");
		else{
			rep(i,ans.size()){
				printf("%d",ans[ans.size()-1-i]);
			}puts("");
		}
	}
	
}