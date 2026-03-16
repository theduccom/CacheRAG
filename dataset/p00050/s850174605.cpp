#include<iostream>
using namespace std;
main(){
	string ap="apple",pe="peach";
	string str;
	getline(cin,str);
	int c1=0,c2=0,c=0;
	for(int i=0;i<str.size();++i){
		string s="";
		for(int j=i;j<i+5;++j){
			s+=str[j];
		}
		if(s==ap){
			for(int j=i;j<i+5;++j){
				str[j]=pe[j-i];
			}
		}
		if(s==pe){
			for(int j=i;j<i+5;++j){
				str[j]=ap[j-i];
			}
		}
	}
	cout<<str<<endl;
}