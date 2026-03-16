#include <string.h>
#include <cmath>
#include <stdio.h>

int main(){
	int a;
	char c[10];
	int ans[4];
	ans[0] = 0;
	ans[1] = 0;
	ans[2] = 0;
	ans[3] = 0;
	while(scanf("%d,%s",&a,&c) != EOF){
		if(strcmp(c,"A") == 0){
			ans[0]++;
		}
		if(strcmp(c,"B") == 0){
			ans[1]++;
		}
		if(strcmp(c,"O") == 0){
			ans[2]++;
		}
		if(strcmp(c,"AB") == 0){
			ans[3]++;
		}
	}
	printf("%d\n%d\n%d\n%d\n",ans[0],ans[1],ans[3],ans[2]);
	return 0;
}