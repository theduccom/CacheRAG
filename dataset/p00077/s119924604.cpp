#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
	char buf[101];
	while( scanf("%s", &buf) != EOF ){
		for(int i=0; buf[i]!=0; i++){
				if(buf[i]!='@') printf("%c", buf[i]);
			else{
				for(int j=0;j<buf[i+1]-48;j++) printf("%c", buf[i+2]);
				i+=2;
			}
		}
		printf("\n");
	}
	return 0;
}