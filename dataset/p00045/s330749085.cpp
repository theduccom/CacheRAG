#include <stdio.h>
#include <math.h>
#include <cmath>

using namespace std;

int main(){
	double sum = 0,am_sum = 0,count = 0,value,amount,average;

	while(scanf("%lf,%lf",&value,&amount)!=EOF){
		sum += value*amount;
		am_sum += amount;
		count++;
	}

	average = am_sum/count;

	printf("%.0lf\n%.0lf\n",sum,round(average));

	return 0;
}