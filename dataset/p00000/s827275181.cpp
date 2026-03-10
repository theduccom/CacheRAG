#include<stdio.h>

int main(){
	int i,l;
	
	for(i=1;i<10;i++){
		for(l=1;l<10;l++){
			printf("%dx%d=%d\n",i,l,i*l);
		}
	}
	
    return 0;
}