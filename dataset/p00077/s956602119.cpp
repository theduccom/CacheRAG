#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main(){
	string s;
	while(cin>>s){
	string buf="";
	rep(i,s.size()){
		if(s[i]=='@'){
			rep(j,s[i+1]-48)buf+=s[i+2];
			i+=2;
		}
		else buf+=s[i];
		
	}
	cout<<buf<<endl;
}
	return 0;
}