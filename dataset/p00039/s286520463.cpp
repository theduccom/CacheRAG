#include<iostream>
#include<string>
#include<map>
using namespace std;

map<char,int> m;
int ans;
string s;

int main(){
	m['I']=1;
	m['V']=5;
	m['X']=10;
	m['L']=50;
	m['C']=100;
	m['D']=500;
	m['M']=1000;
	while(cin>>s){
		ans=0;
		for(int i=s.length()-1;i>=0;i--){
			if(i!=s.length()-1&&m[s[i]]<m[s[i+1]]){
				ans-=m[s[i]];
			}  
			else{
				ans+=m[s[i]];
			} 
		}
		cout<<ans<<endl;
	}
	return 0;
}