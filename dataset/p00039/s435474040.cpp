#include <iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int num[102],ans=0;
	while(cin>>str){
		ans=0;
		for(int i=0;i<str.size();++i){
			if(str[i]=='I')num[i]=1;
			else if(str[i]=='V')num[i]=5;
			else if(str[i]=='X')num[i]=10;
			else if(str[i]=='L')num[i]=50;
			else if(str[i]=='C')num[i]=100;
			else if(str[i]=='D')num[i]=500;
			else if(str[i]=='M')num[i]=1000;
		}
		for(int i=0;i<str.size();++i){
			if(num[i]<num[i+1]&&i!=str.size()-1){
			ans+=num[i+1]-num[i];
			i++;
			}
			else ans+=num[i];
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
