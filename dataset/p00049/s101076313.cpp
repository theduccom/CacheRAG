#include <iostream>
#include<stdio.h>
using namespace std;

int main(){
	int a[4]={0};
	char dami,c[3];
	
	
    while(EOF!=scanf("%d,%s",&dami,c)){
        if(c[0]=='A'&&c[1]!='B')a[0]++;
        if(c[1]=='B')a[2]++;
        if(c[0]=='B')a[1]++;
        if(c[0]=='O')a[3]++;
    }
	int x=0;
	cout<<a[x++]<<endl;
	cout<<a[x++]<<endl;
	cout<<a[x++]<<endl;
	cout<<a[x++]<<endl;

	return 0;
}