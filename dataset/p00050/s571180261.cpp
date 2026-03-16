#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;

int main(){
	
	char s[1002];
	gets(s);
	
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='a'&&s[i+1]=='p'&&s[i+2]=='p'&&s[i+3]=='l'&&s[i+4]=='e'){
			s[i]='p';
			s[i+1]='e';
			s[i+2]='a';
			s[i+3]='c';
			s[i+4]='h';
			i=i+4;
		}
		else if(s[i]=='p'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='c'&&s[i+4]=='h'){
			s[i]='a';
			s[i+1]='p';
			s[i+2]='p';
			s[i+3]='l';
			s[i+4]='e';
			i=i+4;
		}
	}
	puts(s);
	
}