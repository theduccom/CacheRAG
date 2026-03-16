#include<cstdio>
#include<iostream>
using namespace std;
int main(void){
	int n,i,m,e,j;
	char s[10001];
	while(1){
		cin>>n;
		if(n==0) break;
		for(i=0;i<n;i++){
			cin>>m>>e>>j;
			if(m==100||e==100||j==100||(m+e)/2>=90||(m+e+j)/3>=80) s[i]='A';
			else if((m+e+j)/3>=70||((m+e+j)/3>=50&&(m>=80||e>=80))) s[i]='B';
			else s[i]='C';
		}
		for(i=0;i<n;i++) cout<<s[i]<<endl;
	}
	return 0;
}