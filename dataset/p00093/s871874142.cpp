#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
	int A,B;
	int tc=0;
	while(cin>>A>>B,A||B){
		if(tc!=0) puts("");
		bool flag=false;
		for(int i=A;i<=B;i++){
			if(i%4==0 && (i%100!=0 || i%400==0)){
				printf("%d\n",i);
				flag=true;
			}
		}
		if(flag==false) puts("NA");
		tc++;
	}
	return 0;
}