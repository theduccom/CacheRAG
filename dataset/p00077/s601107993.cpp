#include <iostream>
#include <string>

using namespace std;

void ShowString(string str);
int main(){
	string str;
	while(cin>>str){
		ShowString(str);
	}
	return 0;
}

void ShowString(string str){
	for( unsigned int i=0;i<str.length();i++ ){
		if( str[i]!='@' ){
			cout<<str[i];
		}else{
			for( int j=0;j<str[i+1]-48;j++ ){
				cout<<str[i+2];
			}
			i+=2;
		}
	}
	cout<<endl;
}