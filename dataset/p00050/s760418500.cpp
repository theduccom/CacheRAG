#include<iostream>
#include<cstring>
using namespace std;
const int MAX_S=2000;
int main(){
	char s[MAX_S+1];
	fgets(s,MAX_S,stdin);
	for(int i=0;i+4<strlen(s);i++){
			if(s[i]=='a'&&s[i+1]=='p'&&s[i+2]=='p'&&s[i+3]=='l'&&s[i+4]=='e'){
				s[i]='p';
				s[i+1]='e';
				s[i+2]='a';
				s[i+3]='c';
				s[i+4]='h';
			}
		else if(s[i]=='p'&&s[i+1]=='e'&&s[i+2]=='a'&&s[i+3]=='c'&&s[i+4]=='h'){
			s[i]='a';
			s[i+1]='p';
			s[i+2]='p';
			s[i+3]='l';
			s[i+4]='e';
		}
	}
	cout<<s;
	return 0;
}