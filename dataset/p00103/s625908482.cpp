#include<stdio.h>
#include<string.h>
#include<memory.h>

int main(){
	int n,score=0,out=0,ining=0,base=0;
	char s[8];
	scanf("%d",&n);
	while(ining!=n){
		scanf("%s",s);
		if(strcmp(s,"HIT")==0){	
			base++;
		}
		else if(strcmp(s,"HOMERUN")==0){
			score+=base+1;
			base=0;
		}
		else if(strcmp(s,"OUT")==0){
			out++;
		}
		if(base==4){
			score++;
			base=3;
		}
		if(out==3){
			ining++;
			printf("%d\n",score);
			score=0;
			out=0;
			base=0;
		}
	}
	return 0;
}