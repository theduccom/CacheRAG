#include <stdio.h>

int main(void)
{
	int n;
	int i, j, k;
	int max;
	int min;
	char num[16];
	char t;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%s", num);
		
		for (j = 0; j < 7; j++){
			for (k = 0; k < 7 - j; k++){
				if (num[k] > num[k + 1]){
					t = num[k + 1];
					num[k + 1] = num[k];
					num[k] = t;
				}
			}
		}
		max = 0; min = 0;
		for (j = 0; j < 8; j++){
			min *= 10;
			min += num[j] - '0';
		}
		for (j = 7; j >= 0; j--){
			max *= 10;
			max += num[j] - '0';
		}
		
		printf("%d\n", max - min);
	}
	
	return (0);
}