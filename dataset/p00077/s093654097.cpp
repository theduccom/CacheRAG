#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	char S[101];
	while(cin>>S){
		for(int i=0;S[i]!='\0';i++){
			if(S[i]=='@'){
				for(int j=0;j<S[i+1]-'0';j++){
					printf("%c",S[i+2]);
				}
				i+=2;
			}
			else printf("%c",S[i]);
		}puts("");
	}
	return 0;
}