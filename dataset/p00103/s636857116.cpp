#include<stdio.h>
#include<string.h>

int main(void)
{
	int base=0,out=0,score=0,e,i,j;
	char str[10];
	scanf("%d",&e);
	for(i=0;i<e;){
		scanf("%s",&str);
		if(!strcmp(str,"HIT"))base++;
		
		else if(!strcmp(str,"OUT")){
			out++;
		}
		
		else if(!strcmp(str,"HOMERUN")){
			score=score+base+1;
			base=0;
		}
		if(base>3){
			base--;
			score++;
		}
		if(out==3){
			out=0;
			printf("%d\n",score);
			i++;
			base=0;
			score=0;
		}
	}
	return 0;
}