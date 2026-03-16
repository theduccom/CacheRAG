#include <stdio.h>
#include <string.h>

int main(void){
	int a, b, ab, o;
	int temp;
	char blood[3];

	a = b = ab = o = 0;

	while(scanf("%d,%s", &temp, blood) != EOF){
		if(strcmp(blood, "AB") == 0) ab++;
		else if(strcmp(blood, "A") == 0) a++;
		else if(strcmp(blood, "B") == 0) b++;
		else if(strcmp(blood, "O") == 0) o++;
	}

	printf("%d\n%d\n%d\n%d\n", a, b, ab, o);

	return 0;
}