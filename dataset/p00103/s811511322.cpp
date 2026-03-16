#include <stdio.h>
#include <string.h>
int main(){
	int n,b[3]={0},p=0,o=0;
	char s[8];
	scanf("%d",&n);
	while(scanf("%s",s)!=EOF)
	{
		if(!strcmp(s,"HIT"))
		{
			if(b[2])p++,b[2]=0;
			if(b[1])b[2]=1,b[1]=0;
			if(b[0])b[1]=1,b[0]=0;
			b[0]=1;
		}
		if(!strcmp(s,"HOMERUN"))
			p+=b[2]+b[1]+b[0]+1,b[0]=b[1]=b[2]=0;
		if(!strcmp(s,"OUT"))
			o++;
		if(o==3)printf("%d\n",p),o=0,p=0,b[0]=b[1]=b[2]=0;
	}
	return 0;
}