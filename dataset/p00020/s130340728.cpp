#include<iostream>
#include<string>
using namespace std;
int main(){
	int l,i;
	string str;
	getline(cin,str);
	l=str.length();
	for(i=0;i<l;i++){
		if(str[i]=='.'||str[i]==' '){
			cout<<str[i];
			continue;
		}
		str[i]-=32;
		cout<<str[i];
	}
	cout<<endl;
	return 0;
}