#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char m[7]={'I','V','X','L','C','D','M'};
int n[7]={1,5,10,50,100,500,1000};
int d[110];
int main(){
	string s;
	while(cin>>s){
		for(int i=0;i<s.size();i++){
			for(int j=0;j<7;j++){
				if(m[j]==s[i])d[i]=n[j];
			}
		}
		int ans=0;
		for(int i=0;i<s.size();i++){
			bool t=false;
			for(int j=i+1;j<s.size();j++){
				if(d[j]>d[i])t=true;
			}
			if(t)ans-=d[i];
			else ans+=d[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}