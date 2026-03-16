#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char s[101],i,j,k;
while(scanf("%s",s)>0){
for(i=0,k=strlen(s);i<k;i++)
{
	if(s[i]=='@')
	{
		for(j=0;j<s[i+1]-'0';j++)putchar(s[i+2]);
		i+=2;
	}
	else
		putchar(s[i]);
}
putchar('\n');
}return 0;}