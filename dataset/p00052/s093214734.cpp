#include <stdio.h>
#include <cmath>
#include <algorithm>

int main(){

	int n,count,tmp;

	while(true){
		scanf("%d",&n);
		if(n == 0)break;

		count = 0;
		for(int i=1;i <= n; i++){
			tmp = i;
			while(tmp >= 5 && tmp%5  == 0){
				count++;
				tmp /= 5;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}