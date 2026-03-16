#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	int peach;
	int apple;
	getline(cin,str);
	for(int i=0;i<str.size()-4;++i){
		if(str.substr(i,5)=="apple"){
			str.replace(i,5,"peach");
			continue;
		}
		if(str.substr(i,5)=="peach"){
			str.replace(i,5,"apple");
			continue;
		}
	}
	cout<<str<<endl;
	return 0;
}