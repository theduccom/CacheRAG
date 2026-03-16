#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	while(cin>>str){
		for(int i=0;i<str.length();i++){
			if(str[i]!='@') cout<<str[i];
			else if(str[i]=='@'){
				int a=str[i+1]-48;
				for(int j=0;j<a;j++) cout<<str[i+2];
				i+=2;
			}
		}
		cout<<endl;
	}
	return 0;
}