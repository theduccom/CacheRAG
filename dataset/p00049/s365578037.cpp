#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char blood[4];
	int a, b, ab, o;
	
	a = 0; b = 0; ab = 0; o = 0;
	while (scanf("%d,%s", &n, blood) != EOF){
		if (strcmp(blood, "A") == 0){
			a++;
		}
		if (strcmp(blood, "B") == 0){
			b++;
		}
		if (strcmp(blood, "AB") == 0){
			ab++;
		}
		if (strcmp(blood, "O") == 0){
			o++;
		}
	}
	printf("%d\n%d\n%d\n%d\n", a, b, ab, o);
	
	return (0);
}