#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	
	cin >> a >> b >> c;
	
	if(a==1 && b==0 && c==0){
		printf("Close\n"); 
	}else if(a==0 && b==1 && c==0){
		printf("Close\n"); 
	}else if(a==1 && b==1 && c==0){
		printf("Open\n");
	}else if(a==0 && b==0 && c==1){
		printf("Open\n");
	}else printf("Close\n"); 
	
	return 0;
}