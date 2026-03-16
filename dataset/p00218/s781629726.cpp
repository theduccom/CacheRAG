#include<iostream>
#include<string>

using namespace std;

int main(void){
	while(1){
		int a,n;
		char str[10001];
		cin >> n;
		if(n==0)break;
		for(a=0;a<n;a++){
			int m,e,j;
			cin >> m >> e >> j;
			if(m==100 || e==100 || j==100)str[a]='A';
			else if(m+e>=180)str[a]='A';
			else if(m+e+j>=240)str[a]='A';
			else if(m+e+j>=210)str[a]='B';
			else if(m+e+j>=150 && m>=80 || e>=80)str[a]='B';
			else str[a]='C';
		}
		for(a=0;a<n;a++){
			cout << str[a] << endl;
		}

	}
}