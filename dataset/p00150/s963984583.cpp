#include <stdio.h>
#include <cmath>
#include <algorithm>

#define NUM 11000

struct Info{
	int small,big;
};

int main(){
	int table[NUM],limit;

	for(int i=0; i < NUM;i++)table[i] = 1;
	table[0] = 0;
	table[1] = 0;

	limit = sqrt(NUM);

	for(int i=2;i<=limit;i++){
		if(table[i] == 1){
			for(int k=2*i;k < NUM; k += i){
				table[k] = 0;
			}
		}
	}

	Info data_array[NUM];
	int pre = 2;
	data_array[2].small = 0;
	data_array[2].big = 0;

	for(int i=3; i < NUM; i++){
		if(table[i] == 1){
			if(i - pre == 2){
				data_array[i].small = pre;
				data_array[i].big = i;
			}else{
				data_array[i] = data_array[i-1];
			}
			pre = i;
		}else{
			data_array[i] = data_array[i-1];
		}
	}


	int n;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		printf("%d %d\n",data_array[n].small,data_array[n].big);
	}


	return 0;
}