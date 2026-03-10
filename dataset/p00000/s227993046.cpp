#include <stdio.h>
int main(void){
	int i,j,c;
        for(i=1;i<=9;i++){
	 for(j=1;j<=9;j++){
		c = i * j;
		printf("%dx%d=%d\n", i,j,c);
		}
    }
	return 0;
}