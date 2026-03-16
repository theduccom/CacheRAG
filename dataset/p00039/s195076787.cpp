#include <iostream>
#include <map>
using namespace std;

int main() {
	map<char,int> mp;
	mp['I']=1;
	mp['V']=5;
	mp['X']=10;
	mp['L']=50;
	mp['C']=100;
	mp['D']=500;
	mp['M']=1000;
	string s;
	
	while(getline(cin,s)>0){
		int sum=0,before=0,tmp=0;
		for(int i=s.size()-1;i>=0;i--){
			if(before>mp[s[i]]){
				sum-=mp[s[i]];
			}else{
				sum+=mp[s[i]];
			}
			before=mp[s[i]];
		}
		cout<<sum<<endl;
	}return 0;
}