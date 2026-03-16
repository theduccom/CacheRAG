#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

int main(){

	int n,m,table[1000],sum;

	while(true){
		scanf("%d %d",&n,&m);
		if(n == 0 && m == 0)break;

		for(int i = 0; i < n; i++){
			scanf("%d",&table[i]);
		}

		for(int i = 1; i <= n-1; i++){
			for(int k = n-1; k >= i; k--){
				if(table[k] > table[k-1])swap(table[k],table[k-1]);
			}
		}

		sum = 0;

		for(int i = 0; i < n; i++){
			if(i%m != m-1){
				sum += table[i];
			}
		}
		printf("%d\n",sum);
	}

	return 0;
}