// 0067
#include <iostream>
#include <cstdio>
using namespace std;

char s[13][13];

void walk(int i,int j){
	if(!(0<=i&&i<12&&0<=j&&j<12))return;
	if(s[i][j]=='0')return;
	s[i][j]='0';
	walk(i+1,j);
	walk(i-1,j);
	walk(i,j+1);
	walk(i,j-1);
}

int main(void){
	while (scanf("%s",s[0])!=EOF) {
		for(int i=1;i<12;i++){ scanf("%s",s[i]); }
		int c=0;
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(s[i][j]=='1'){
					c++;
					walk(i,j);
				}
			}
		}
		cout<<c<<endl;
	}
}