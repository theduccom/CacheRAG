#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int b1,b2,b3;
	
	scanf("%d %d %d",&b1,&b2,&b3);
	if(b1==0){
		if(b2==0){
			if(b3==0)
			printf("Close\n");
			else
			printf("Open\n");
		}
		else
		printf("Close\n");
	}
	else{
		if(b2==0)
		printf("Close\n");
		else
		printf("Open\n");
	}
}
