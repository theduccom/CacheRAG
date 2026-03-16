#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	int i,x,z;
	char y;
	string str;
	while(cin>>str){
		string ans;
		for(i=0;i<str.size();i++){
			if(str[i]=='@'){
				int x;
				char y;
				x=str[i+1]-'0';
				y=str[i+2];
				for(z=1;z<=x;z++){
					ans+=y;
				}
				i=i+2;
			}else{
				ans+=str[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}