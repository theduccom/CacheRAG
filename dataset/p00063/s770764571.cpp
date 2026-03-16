#include<stdio.h>
#include<string.h>
int main()
{
	char s[128],b[128];
	int l,r=0;
	while(scanf("%s",s)!=EOF){
		l=strlen(s);
		strcpy(b,s);
		for(int i=0;i<l;i++){
			b[l-(i+1)]=s[i];
		}
		if(strcmp(s,b)==0){
			r++;
		}
		for(int i=0;i<128;i++){
			s[i]=0;
			b[i]=0;
		}
	}
	printf("%d\n",r);
	return 0;
}