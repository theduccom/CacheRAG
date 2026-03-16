#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[200];
	int ans = 0;
	int len;
	while(scanf("%s", c) != EOF){
		len = strlen(c);
		ans++;
		for(int i = 0; i < len / 2; i++){
			if(c[i] != c[len - i - 1]){
				ans--;
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}