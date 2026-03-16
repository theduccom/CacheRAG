#include<stdio.h>

int main(void){
	char str[1050];
	int i;
	scanf("%[^\n]",str);
	while(str[i]!='\0'){
		if(str[i]=='a'&&str[i+1]=='p'&&str[i+2]=='p'&&str[i+3]=='l'&&str[i+4]=='e'){
			printf("peach");i=i+5;
		}
		else if(str[i]=='p'&&str[i+1]=='e'&&str[i+2]=='a'&&str[i+3]=='c'&&str[i+4]=='h'){
			printf("apple");i=i+5;
		}
		else {printf("%c",str[i++]);}
	}
	printf("\n");
	return 0;
}