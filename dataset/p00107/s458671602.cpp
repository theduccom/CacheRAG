#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;


int main(){

	double d,w,h,r,min_dist,dist1,dist2,dist3;
	int n;

	while(true){
		scanf("%lf %lf %lf",&d,&w,&h);
		if(d == 0.0 && w == 0.0 && h == 0.0)break;

		scanf("%d",&n);

		for(int i=0; i < n; i++){
			scanf("%lf",&r);
			dist1 = (sqrt(d*d+w*w))/2.0;
			dist2 = (sqrt(w*w+h*h))/2.0;
			dist3 = (sqrt(d*d+h*h))/2.0;
			min_dist = min(dist1,min(dist2,dist3));
			if(r > min_dist){
				printf("OK\n");
			}else{
				printf("NA\n");
			}
		}
	}

    return 0;
}