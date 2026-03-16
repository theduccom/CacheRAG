#include<iostream>
#include<cstdio>
using namespace std;
int main(void){
int a,dat=0;
	
	cin>>a;
	dat+=a*100;
	cin>>a;
	dat+=a*10;
	cin>>a;
	dat+=a;
	
	switch(dat){
	
		case 100:
		case 10:
		case 0:
			printf("Close");
			break;
		default:
			printf("Open");
	}
	cout<<endl;
}