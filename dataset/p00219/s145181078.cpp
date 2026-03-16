#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

	int n,table[10],tmp;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		for(int i = 0; i < 10; i++)table[i] = 0;

		for(int i = 0; i < n; i++){
			scanf("%d",&tmp);
			table[tmp]++;
		}

		for(int i = 0; i < 10; i++){
			if(table[i] == 0){
				printf("-\n");
			}else{
				for(int k = 0; k < table[i]; k++)printf("*");
			}
			printf("\n");
		}
	}

    return 0;
}