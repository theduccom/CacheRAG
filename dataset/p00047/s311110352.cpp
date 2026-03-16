#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
	string a;
	char t='A';
	while(getline(cin,a)){
		if(a[0]==t)
			t=a[2];
		else if(a[2]==t)
			t=a[0];
	}
	cout<<t<<endl;
	return 0;
}