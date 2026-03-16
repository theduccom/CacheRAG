#include<iostream>
#include<cstring>
#define MAX 90
using namespace std;
char str[MAX];
bool contain(){
	for(int i=0;str[i]!='\0';i++){
		if(str[i]=='t'){
			if(strncmp(&str[i],"the",3)==0)
			return 1;
			else if(strncmp(&str[i],"this",4)==0)
			return 1;
			else if(strncmp(&str[i],"that",4)==0)
			return 1;
		}
	}
	return 0;
}
void rotate(){
	for(int i=0;str[i]!='\0';i++)
	if(str[i]=='z')
	str[i]='a';
	else if(isalpha(str[i]))
	str[i]=(char)(str[i]+1);
}
int main(){
	while(cin.getline(str,MAX)){
		for(int i=0;i<26;i++){
			rotate();
			if(contain())
				break;
		}
		cout<<str<<endl;
	}
	return 0;
}