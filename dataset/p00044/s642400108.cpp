#include <stdio.h>

int s[100000];

int main(void)
{
	int i;
	int j;
	int n;
	int a1, a2;
	
	for (i = 0; i <= 100000; i++){
		s[i] = 1;
	}
	s[0] = s[1] = 0;
	for (i = 2; i * i <= 100000; i++){
		if (s[i] == 0) continue;
		for (j = i * i; j <= 100000; j += i){
			s[j] = 0;
		}
	}
	while (scanf("%d", &n) != EOF){
		i = 1;
		a1 = a2 = 0;
		while (a1 == 0 || a2 == 0){
			if (s[n - i] == 1 && a1 == 0){
				a1 = n - i;
			}
			if (s[n + i] == 1 && a2 == 0){
				a2 = n + i;
			}
			i++;
		}
		printf("%d %d\n", a1, a2);
	}
	return (0);
}