
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<time.h>
#include<cmath>
#include<queue>
using namespace std;
#define INF 1000000;
int c,len;
char str[101];
int main(){
	while(cin>>str){
		c=0;
		while(strlen(str)>c){
			if(str[c]!='@'){
				cout<<str[c];
				c++;
			}else{
				for(int i=0;i<(int)(str[c+1]-'0');i++){
					cout<<str[c+2];
				}
				c+=3;
			}
		}
		cout<<endl;
	}

	return 0;
}	