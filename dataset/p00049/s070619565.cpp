#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
	int x,a=0,b=0,ab=0,o=0;
	string str,ans;
	char c;
	while(cin>>str){
		for(int i=0;i<str.size();i++){
			if(str[i]==','){
				for(int j=i+1;j<str.size();j++){
					c=str[j];
					ans+=str[j];
				}
			}
		}
		if(ans=="A"){
			a++;
		}else if(ans=="B"){
			b++;
		}else if(ans=="AB"){
			ab++;
		}else{
			o++;
		}
		ans="";
	}
	cout<<a<<endl<<b<<endl<<ab<<endl<<o<<endl;
	return 0;
}