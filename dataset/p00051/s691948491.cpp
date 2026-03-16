#include <iostream>
#include <string>
using namespace std;

void swap(char &a,char &b){
	char temp=a;
	a=b;
	b=temp;
}

int stoi(string s){
	int a=0;
	for(int i=0,digit=1;i<s.length();i++,digit*=10){
		a+=(s[i]-'0')*digit;
	}
	return a;
}

int main(void){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		for(int i=0;i<8;i++){
			for(int j=8-1;j>i;j--){
				if(s[i]>s[j])swap(s[i],s[j]);
			}
		}
		int A=stoi(s);
		for(int i=0;i<8;i++){
			for(int j=8-1;j>i;j--){
				if(s[i]<s[j])swap(s[i],s[j]);
			}
		}
		int B=stoi(s);
		cout<<A-B<<endl;
	}
	return 0;
}