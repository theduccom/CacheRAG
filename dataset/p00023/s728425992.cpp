#include <stdio.h>
#include<math.h>
using namespace std;

int main(){
	int N;
	double x_a,y_a,r_a,x_b,y_b,r_b,dist;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%lf %lf %lf %lf %lf %lf",&x_a,&y_a,&r_a,&x_b,&y_b,&r_b);

		if(r_a > r_b){
			dist = sqrt((x_a -x_b)*(x_a-x_b)+(y_a-y_b)*(y_a-y_b));
			if(dist < (r_a-r_b))printf("2\n");
			else if(dist >= (r_a-r_b) && dist <= (r_a+r_b))printf("1\n");
			else{
				printf("0\n");
			}
		}else{	//r_a < r_b
			dist = sqrt((x_b -x_a)*(x_b-x_a)+(y_b-y_a)*(y_b-y_a));
			if(dist < (r_b-r_a))printf("-2\n");
			else if(dist >= (r_b-r_a) && dist <= (r_b+r_a))printf("1\n");
			else{
				printf("0\n");
			}
		}
	}

    return 0;
}