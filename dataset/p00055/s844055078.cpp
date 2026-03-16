#include <stdio.h>
#include <cmath>
#include <algorithm>

int main(){
	double a,current,sum;
	while(scanf("%lf",&a)!=EOF){
		current = a;
		sum = a;
		for(int i = 2; i <= 10; i++){
			if(i %2 == 0){
				current = current*2.0;
				sum += current;
			}else{
				current = current/3.0;
				sum += current;
			}
		}
		printf("%.8lf\n",sum);

	}

	return 0;
}