#include<stdio.h>
#include<string.h>

int main(){
	char c,str[1000][1000];
	int i,j,flag=0;;
	
	for(i=0;;i++){
		for(j=0;;j++){
			scanf("%c",&c);
			if(c==' ')break;
			else if( c>=97 && c<=122)str[i][j]=c-32;
			else str[i][j]=c;
			
			if(c=='\n'){
				flag=1;
				break;
			}
		}
		if(flag==1)break;
	}
	for(j=0;j<=i;j++){
		printf("%s",str[j]);
		if(j<i)printf(" ");
	}
	
	return 0;
}