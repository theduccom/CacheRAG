#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int n;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		int out = 0;
		int hit = 0;
		int point = 0;
		while (1){
			char str[16];
			scanf("%s", str);
			
			if (strcmp(str, "HIT") == 0){
				hit++;
				if (hit > 3){
					hit--;
					point++;
				}
			}
			if (strcmp(str, "HOMERUN") == 0){
				point += hit + 1;
				hit = 0;
			}
			if (strcmp(str, "OUT") == 0){
				out++;
			}
			if (out >= 3) break;
		}
		printf("%d\n", point);
	}
	return (0);
}