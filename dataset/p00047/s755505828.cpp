#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	char left,right;
	int array[3];
	array[0] = 1,array[1] = 0,array[2] = 0;

	while(scanf("%c,%c",&left,&right)!=EOF){
		if((left == 'A' && right == 'B') || (left == 'B'&&right == 'A')){
			swap(array[0],array[1]);
		}else if((left == 'A' && right == 'C') || (left == 'C' && right == 'A')){
			swap(array[0],array[2]);
		}else{
			swap(array[1],array[2]);
		}
	}

	for(int i=0;i<3;i++){
		if(array[i] == 1){
			switch(i){
			case 0:
				printf("A\n");
				break;
			case 1:
				printf("B\n");
				break;
			case 2:
				printf("C\n");
				break;
			}
		}
	}
	return 0;
}