#include <stdio.h>
#include <math.h>

int main(void){
	int sum_price, sum_num;
	int price, num; 
	int i = 0;
	sum_price = sum_num = 0;

	while(scanf("%d,%d", &price, &num) != EOF){
		sum_price += (price * num);
		sum_num += num;
		i++;
	}

	printf("%d\n%.0f\n", sum_price, floor(((double)sum_num / i) + 0.5));

	return 0;
}