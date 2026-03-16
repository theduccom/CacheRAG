#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(void){

	int i,j;
	char str[256];	

	while(fgets(str,sizeof(str),stdin)!=NULL){				
		
		while(1){
			for(i=0;i<sizeof(str);i++){
				
				if(str[i]=='\0'){
					break;
				}
				
				if(isalpha(str[i])){
					if(islower(str[i])){
						if(str[i]=='z'){
							str[i]='a';
						}else{
							str[i]=str[i]+1;
						}
					}
					else if(isupper(str[i])){
						if(str[i]=='Z'){
							str[i]='A';
						}else{
							str[i]=str[i]+1;
						}
					}
				}
			}
			if(strstr(str,"the")!=NULL || strstr(str,"this")!=NULL || strstr(str,"that")!=NULL){
				printf("%s",str);
				break;
			}
			
		}
		
	}
	return 0;
	
}