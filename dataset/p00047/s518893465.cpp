#include <stdio.h>

int main(void){
	int cup[3];
	char c1, c2;

	cup[0] = 1;
	cup[1] = cup[2] = 0;

	while(scanf("%c,%c", &c1, &c2) != EOF){
		c1 -= 65;
		c2 -= 65;
		
		int temp = cup[c1];
		cup[c1] = cup[c2];
		cup[c2] = temp;
	}

	for(int i=0; i<3; i++){
		if(cup[i] == 1) printf("%c\n", i+65);
	}

	return 0;
}