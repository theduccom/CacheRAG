#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	double a[10],v1,v2,sum_length,distance;

	while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",
			&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&v1,&v2) != EOF){
		sum_length = 0;
		for(int i=0; i < 10; i++){
			sum_length += a[i];
		}
		distance = v1*((sum_length)/(v1+v2));

		if(distance == 0){
			printf("1\n");
		}else{
			sum_length = 0;
			for(int i=0;i<10;i++){
				sum_length += a[i];
				if(distance <= sum_length){
					printf("%d\n",i+1);
					break;
				}
			}
		}
	}

    return 0;
}