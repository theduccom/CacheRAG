#include <stdio.h>

int main(void){
	int i,j;
	char buf[104];

	while(fgets(buf,104,stdin)){
		for(i=0;buf[i]!=0;i++){
			if(buf[i]=='@'){
				for(j=0;j<buf[i+1]-'0';j++){
					putchar(buf[i+2]);
				}
				i += 2;
			}
			else{
				putchar(buf[i]);
			}
		}
	}

	return 0;
}