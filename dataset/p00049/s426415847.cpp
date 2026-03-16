#include <stdio.h>
#include <string.h>

int main(){
	int a = 0,b = 0,o = 0,ab = 0,num;
	char blood[3];
	while(scanf("%d,%s",&num,blood) != EOF){
		if(!strcmp(blood,"A")) a++;
		else if(!strcmp(blood,"B")) b++;
		else if(!strcmp(blood,"O")) o++;
		else if(!strcmp(blood,"AB")) ab++;
	}
	printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
	return 0;
}