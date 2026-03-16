#include<iostream>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	string s;
	int ans=0;
	while(cin>>s){
		string str1="",str2="";
		if(s.size()%2){		
			rep(i,s.size()/2)str1+=s[i];
			for(int i=s.size()-1;i>s.size()/2;i--)str2+=s[i];
		}else{
			rep(i,s.size()/2)str1+=s[i];
			for(int i=s.size()-1;i>=s.size()/2;i--)str2+=s[i];
		}
		if(str1==str2)ans++;
	}
	cout<<ans<<endl;
	return 0;
}