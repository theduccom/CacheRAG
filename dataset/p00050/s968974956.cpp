#include<cstdio>
#include<iostream>
#include<string>

using namespace std;

int main(void){

	int cnt=0;
	string str;
	string inp;

	while(1){
		inp=getchar();
		str+=inp;
		cnt++;
		if(cnt>=5){
			if(str[cnt-1]=='e'&&str[cnt-2]=='l'&&str[cnt-3]=='p'&&str[cnt-4]=='p'&&str[cnt-5]=='a') str[cnt-1]='h',str[cnt-2]='c',str[cnt-3]='a',str[cnt-4]='e',str[cnt-5]='p';
			else if(str[cnt-1]=='h'&&str[cnt-2]=='c'&&str[cnt-3]=='a'&&str[cnt-4]=='e'&&str[cnt-5]=='p') str[cnt-1]='e',str[cnt-2]='l',str[cnt-3]='p',str[cnt-4]='p',str[cnt-5]='a';
		}
		if(inp=="\n") break;
	}
	cout<<str;
	return 0;
}