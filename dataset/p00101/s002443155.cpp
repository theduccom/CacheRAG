#include<stdio.h>
#include<string.h>
int main(void)
{
	int ct;
	char* rp;
	char retu[1000];
	scanf("%d",&ct);
	//fflush(stdin);
	getchar();
	for(int f1=0;f1<ct;f1++){
		gets(retu);
		while(1){
			if(strstr(retu,"Hoshino")==NULL){
				break;
			}
			if(rp=strstr(retu,"Hoshino")){
				rp+=6;
				*rp='a';
			}
		}
		printf("%s\n",retu);
	}
	return 0;
}