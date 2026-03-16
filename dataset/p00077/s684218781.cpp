#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[101];
	int i,j,len;
	int a;
	
	while(scanf("%s",str)!=EOF){
		len=strlen(str);
		for(i=0;i<len;i++){
			if(str[i]=='@'){
				a=str[i+1]-'0';
				for(j=0;j<a;j++){
					printf("%c",str[i+2]);
				}
				i+=2;
			}
			else {
				printf("%c",str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}