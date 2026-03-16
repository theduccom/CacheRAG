#include <cstdio>
#include <iostream>

using namespace std;

char data1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char data2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char mozi;
int flag=0;

int main(){
	while(flag == 0){
		scanf("%c",&mozi);
		if(mozi == ' '){
			printf(" ");
		}else if(mozi == '.'){
			printf(".");
		}else if(mozi == '\n'){
			printf("\n");
			flag = 1;
		}else{
			for(int i=0;i<26;i++){
				if(data1[i] == mozi){
					printf("%c",data2[i]);
					break;
				}
			}
		}
	}

}