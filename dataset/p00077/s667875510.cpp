#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char str[101]; char ans[101];
	while(cin >> str){
		int len=strlen(str); int n=0;
		for(int i=0;i<len;i++){
		if(str[i]!='@') ans[n++]=str[i] ;
		else if(str[i]=='@') {
			char j=str[++i]; char ch=str[++i] ;
			for(int k=0;k<j-'0';k++) ans[n++]=ch;
			};
		};
		ans[n]='\0';
		cout << ans << '\n' ;
	};
}