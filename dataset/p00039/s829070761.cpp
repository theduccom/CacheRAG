#include<iostream>
using namespace std;

int main(){
	string s;
	int num[256];
	num['I']=1;
	num['V']=5;
	num['X']=10;
	num['L']=50;
	num['C']=100;
	num['D']=500;
	num['M']=1000;
	while(cin>>s){
		int ans=num[s[0]];
		for(int i=1;i<s.size();i++){
			if(num[s[i-1]]<num[s[i]])ans+=num[s[i]]-2*num[s[i-1]];
			else ans+=num[s[i]];
		}
		cout<<ans<<endl;
	}
	return 0;
}