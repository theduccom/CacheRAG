#include<algorithm>
#include<iostream>
#include<string>

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)

using namespace std;

int n;
string a,b;

int main(void){
	cin>>n;
	while(n--){
		cin>>a>>b;
		int siz = max(a.size(),b.size());
		if(a.size()>80||b.size()>80){
			cout<<"overflow"<<endl;
			continue;
		}
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());		
		a.resize(80);
		b.resize(80);
		
		string ans="";
		int c = 0;
		rep(i,siz){
			if(i>=a.size()||a[i]=='\0')
				a[i] = '0';
			if(i>=b.size()||b[i]=='\0')
				b[i] = '0';
			int t = int(a[i]) - '0' + b[i] - '0' + c;
			c = 0;
			if(t>=10){
				c = 1 , t %= 10;
			}
			ans += char(t+'0');				
		}
		
		if(c)
			ans += '1';
			
		if(ans.size()>80)
			cout<<"overflow"<<endl;
		else {
			rep(i,ans.size()){
				cout<<ans[ans.size()-1-i];
			}
			cout<<endl;
		}
	}
}