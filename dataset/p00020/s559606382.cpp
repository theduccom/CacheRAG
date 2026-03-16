#include<iostream>
#include<string>
#include<ctype.h>
#include<stdio.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<a.size();i++){
    if(isalnum(a[i])!=0)
		a[i]=toupper(a[i]);
	cout<<a[i];	
	}
	cout<<endl;
	return 0;
}