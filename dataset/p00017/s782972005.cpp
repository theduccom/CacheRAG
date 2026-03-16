#include<iostream>
#include<string>
using namespace std;

char shift(char in){
	if('a'<=in&&in<='y'){
		return in+1;
	}else if(in=='z'){
		return 'a';
	}else{
		return in;
	}	
}
int main(){
	char a[100];
	string data;
	while(cin.getline(a,100)){
//	cout<<a<<endl;
		while(true){
			data=a;
			if(data.find("the")!=-1 || data.find("this")!=-1 || data.find("that")!=-1)
				break;
			for(int i=0;a[i]!='\0';i++){
				a[i]=shift(a[i]);
			}
//		cout<<a<<endl;
		}
		cout<<data<<endl;
	}
}