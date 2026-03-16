#include <stdio.h>

int main(void){
	int x,y,z;
	scanf("%d%d%d", &x,&y,&z);
	puts(z||x&&y?"Open":"Close");
	return 0;
}