#include<stdio.h>
int main (void){
	int  x1=1,x2=1,count,kotae;
	for(count = 0;count<81;count++){
		if(x2 == 10){
			x2 = 1;
			x1 = x1 + 1;
		}
		kotae = x1 * x2;
		printf("%dx%d=%d\n",x1,x2,kotae);
		x2 = x2 + 1;
	}
	return(0);
}