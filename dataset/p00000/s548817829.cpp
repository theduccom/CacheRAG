#include<stdio.h>

int main(){
	int a,b,i,j;
	for(i=0;i<9;i++){
		a=i+1;
		for(j=0;j<9;j++){
			b=j+1;
			printf("%dx%d=%d\n",a,b,a*b);
		}
	}

    return 0;
}