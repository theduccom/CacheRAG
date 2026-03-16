#include<stdio.h>
#include<string.h>
int main()
{
	char s[128];
	int k;
	while(scanf("%s",s)!=EOF){
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='@'){
				i++;
				k=s[i]-'0';
				i++;
				for(int j=0;j<k;j++){
					printf("%c",s[i]);
				}
			}else{
				printf("%c",s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}