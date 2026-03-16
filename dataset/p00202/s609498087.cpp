#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>

#define NUM 1100000

using namespace std;

int table[NUM];

void func(int n,int budget){

	int tmp,max_prime = 0,food[n],index = 0;

	bool checkTable[budget+1],FLG;

	for(int i = 0; i < budget+1;i++)checkTable[i] = false;

	checkTable[0] = true;

	for(int i = 0; i < n; i++){
		scanf("%d",&tmp);
		FLG = true;

		//??¢?????????????????°???????¢??????????
		for(int loop = 0; loop < index;loop++){
			if(food[loop] == tmp){
				FLG = false;
				break;
			}
		}

		if(FLG == true && tmp <= budget){
			food[index++] = tmp;

			for(int k = 1; k <= budget; k++){
				if((k%tmp == 0) || (k >= tmp && checkTable[k-tmp] == true)){
					checkTable[k] = true;
					if(table[k] == 1){
						max_prime = max(max_prime,k);
					}
				}
			}
		}
	}

	if(max_prime == 0)printf("NA\n");
	else{
		printf("%d\n",max_prime);
	}

}

int main(){
	int limit;

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

	int n,budget;

	while(true){
		scanf("%d %d",&n,&budget);
		if(n == 0 && budget == 0)break;

		func(n,budget);
	}
	return 0;
}