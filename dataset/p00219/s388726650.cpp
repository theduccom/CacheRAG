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
	int n,s;
	int T[10];
	while(1){
		for(int i=0;i<10;i++){
			T[i]=0;
		}
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>s;
			T[s]+=1;

		}
		for(int i=0;i<10;i++){
			if(T[i]==0){
				cout<<"-";
			}else{
				for(int j=0;j<T[i];j++){
					cout<<"*";
				}
			}
			cout<<endl;
		}
	}

	return 0;
}