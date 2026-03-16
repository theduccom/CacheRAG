#include<stdio.h>
int main()
{
	char l,r,p='A';
	while(scanf("%c,%c",&l,&r)!=EOF){
		if(l==p){
			p=r;
		}else if(r==p){
			p=l;
		}
	}
	printf("%c\n",p);
	return 0;
}