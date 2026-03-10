#include <stdio.h>

int main(){
	int loop_i,loop_j;
	for(loop_i = 1;loop_i < 10;loop_i++){
		for(loop_j = 1;loop_j < 10;loop_j++){
			printf("%dx%d=%d\n",loop_i,loop_j,loop_i*loop_j);
		}
	}

	return 0;
}