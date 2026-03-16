#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	char str2[128];
	int ans;
	int i, j;
	
	ans = 0;
	while (scanf("%s", str) != EOF){
		j = 0;
		for (i = strlen(str) - 1; i >= 0; i--){
			str2[j] = str[i];
			j++;
		}
		str2[j] = '\0';
		if (strcmp(str, str2) == 0){
			ans++;
		}
	}
	printf("%d\n", ans);
	
	return (0);
}