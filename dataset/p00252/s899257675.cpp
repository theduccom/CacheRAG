#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a=0;
	for(int i=0;i<3;i++){
		int tmp;
		cin>>tmp;
		a+=(tmp<<i);
	}
	if(a==4||a==3)printf("Open\n");
	else printf("Close\n");
	return 0;
}