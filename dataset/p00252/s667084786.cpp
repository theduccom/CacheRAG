#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int b[3],i;
	for(i=0;i<3;i++){
		cin>> b[i];
	}
	if(b[0]==1 && b[1]==0){
		cout<< "Close"<<endl;
	}
	if(b[0]==0 && b[1]==1){
		cout<< "Close"<<endl;
	}
	if(b[0]==1 && b[1]==1){
		cout<< "Open"<<endl;
	}
	if(b[2]==1){
		cout<< "Open"<<endl;
	}
	if(b[0]==0 && b[1]==0 && b[2]==0){
		cout<< "Close"<<endl;
	}
	return 0;
}