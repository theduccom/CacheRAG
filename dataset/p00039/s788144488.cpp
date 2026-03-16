#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
	int ans=0;
	char c[100]="";
	string str;
	while(cin>>str){
		for(int i=0;i<str.size();i++){
			c[i]=str[i];
			switch(c[i]){
			case'I':
				ans+=1;
				break;
			case'V':
				if(c[i-1]=='I'){
					ans+=3;
					break;
				}else{
					ans+=5;
					break;
				}
			case'X':
				if(c[i-1]=='I'){
					ans+=8;
					break;
				}else{
					ans+=10;
					break;
				}
			case'L':
				if(c[i-1]=='X'){
					ans+=30;
					break;
				}else{
					ans+=50;
					break;
				}
			case'C':
				if(c[i-1]=='X'){
					ans+=80;
					break;
				}else{
					ans+=100;
					break;
				}
			case'D':
				if(c[i-1]=='C'){
					ans+=300;
					break;
				}else{
					ans+=500;
					break;
				}
			case'M':
				if(c[i-1]=='C'){
					ans+=800;
					break;
				}else{
					ans+=1000;
					break;
				}
			}
		}
		cout<<ans<<endl;
		ans=0;
		int c[100];
	}
	return 0;
}