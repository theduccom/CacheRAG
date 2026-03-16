//============================================================================
// Name        : AOJ.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int n,m,e,j;
	while(1){
		cin>>n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			cin>>m>>e>>j;
			if(m==100 || e==100 || j==100)cout<<"A"<<endl;
			else if((m+e)/2>=90)cout<<"A"<<endl;
			else if((m+e+j)/3>=80)cout<<"A"<<endl;
			else if((m+e+j)/3>=70)cout<<"B"<<endl;
			else if(((m+e+j)/3>=50&&m>=80)||((m+e+j)/3>=50&&e>=80))cout<<"B"<<endl;
			else cout<<"C"<<endl;
		}
	}
	return 0;
}