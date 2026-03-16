#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a[3],i;
		for(i=0;i<3;i++){
			cin>>a[i];
		}if(a[0]==1){
			if(a[1]==1){
				cout<<"Open"<<endl;
			}
		}if(a[2]==1){
			cout<<"Open"<<endl;
		}else if(a[0]==1&&a[1]==1&&a[2]==0){
			
		}
		
		else{
			cout<<"Close"<<endl;
		}
	
	return 0;
}