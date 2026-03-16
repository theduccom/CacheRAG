#include<iostream>
#include<cstdio>
#include<cmath>
#include <string> 
using namespace std;

int main(){
	string num;
	int t;
	while( getline(cin,num)){
		while(1){
			for(int i=0;num[i]!='\0';i++){
				if(num[i]=='a'){
					num[i]='z';
				}
				else if(num[i]>'a'&& num[i]<='z'){
					num[i]--;
				}
			}
			t=0;
			for(int i=0;num[i]!='\0';i++){
				if(num[i]=='t' && num[i+1]=='h'){
					if(num[i+2]=='e')t=1;
					if(num[i+2]=='i'&&num[i+3]=='s')t=1;
					if(num[i+2]=='a'&&num[i+3]=='t')t=1;
				}
			}
			if(t==1)break;
		}
		cout << num << "\n";
	}
	return 0;
}