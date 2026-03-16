#include<cstdio>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char map[2][6]={"apple","peach"};
	char c[10000]={0};
	for(int i=0;i<1000;i++)
	{
		c[i]=getchar();
		if(c[i]=='\n')break;
	}
	for(int i=0;i<1000;i++)
	{
		if(c[i]=='\0')break;
		int a=0,p=0;
		for(int j=0;j<5;j++)
		{
			if(map[0][j]==c[i+j])a++;
			if(map[1][j]==c[j+i])p++;
		}
		if(a==5)
		{
			printf("peach");
			i+=4;
		}
		else if(p==5)
		{
			printf("apple");
			i+=4;
		}
		else printf("%c",c[i]);
	}
	return 0;
}