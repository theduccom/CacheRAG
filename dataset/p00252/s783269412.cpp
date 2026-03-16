#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a*4+b*2+c == 1) printf("Open\n");
	else if(a*4+b*2+c == 6) printf("Open\n");
	else printf("Close\n");
	return 0;
}