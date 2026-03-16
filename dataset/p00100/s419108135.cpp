#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

struct Sales{
	long long int sum;
	int id;
};


int main(){

	int checkTable[4001],index;
	long long int price,amount;
	Sales sales[4001];

	int n,id,count;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		for(int i = 1; i <= 4000; i++){
			sales[i].id = -1;
			sales[i].sum = 0;
			checkTable[i] = -1;	//?????´?????????????????????-1,?????´????????????sales??§?????????????????????
		}

		index = 0;

		for(int i = 1; i <= n; i++){
			scanf("%d %lld %lld",&id,&price,&amount);

			if(checkTable[id] == -1){	//????????´?????´???
				sales[index].id = id;
				sales[index].sum = price*amount;
				checkTable[id] = index;
				index++;
			}else{
				sales[checkTable[id]].sum += price*amount;
			}

		}

		count = 0;

		for(int i = 0; i < index; i++){
			if(sales[i].sum >= 1000000){
				printf("%d\n",sales[i].id);
				count++;
			}
		}
		if(count == 0)printf("NA\n");
	}

    return 0;
}