#include <stdio.h>
#include <math.h>

#define DEBUG

#ifndef DEBUG 
#define fprintf (void)
#endif 

int main(void){
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			printf("%dx%d=%d\n",i,j,i*j);
		}
	}
	return 0;
}