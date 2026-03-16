#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0) break;

		int x, ice[10] = {0};
		for(int i=0;i<n;i++){
			cin>>x;
			ice[x]++;
		}

		for(int i=0;i<10;i++){
			if(ice[i]==0){
				cout<<"-"<<endl;
			} else {
				for(int j=0;j<ice[i];j++) cout<<"*";
				cout<<endl;
			}
		}

	}
	return 0;
}