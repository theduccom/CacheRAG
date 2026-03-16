#include<stdio.h>
#include <ctype.h>


int main()
{
char str,ch;
int  n;
while(1)
{
	scanf("%c",&str);
	if(str=='\n')break;
ch=toupper(str);
printf("%c",ch);
}
printf("\n");
return 0;
}