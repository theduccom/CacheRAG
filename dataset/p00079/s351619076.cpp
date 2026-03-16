#include <stdio.h>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){

	double base_x = 0,base_y = 0,pre_x,pre_y,current_x,current_y,sum = 0,right,left,bottom,z;


	scanf("%lf,%lf",&base_x,&base_y);
	scanf("%lf,%lf",&current_x,&current_y);
	right = sqrt((current_x-base_x)*(current_x-base_x)+(current_y-base_y)*(current_y-base_y));
	pre_x = current_x;
	pre_y = current_y;

	while(scanf("%lf,%lf",&current_x,&current_y)!=EOF){
		bottom = sqrt((current_x-pre_x)*(current_x-pre_x)+(current_y-pre_y)*(current_y-pre_y));
		left = sqrt((current_x-base_x)*(current_x-base_x)+(current_y-base_y)*(current_y-base_y));

		z = (left+right+bottom)/2;
		sum += sqrt(z*(z-left)*(z-right)*(z-bottom));
		right = left;
		pre_x = current_x;
		pre_y = current_y;
	}

	printf("%.6lf\n",sum);

    return 0;
}