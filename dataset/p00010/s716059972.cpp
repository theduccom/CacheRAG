#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		double x1,y1,x2,y2,x3,y3;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);

		double x,y;
		double ax,ay,am,bx,by,bm;


		if(y1==y2){
			x = (x1+x2)/2;
			bx = (x2+x3)/2;
			by = (y2+y3)/2;
			bm = -(x2-x3)/(y2-y3);
			y = bm*(x-bx)+by;
		}else if(y2==y3){
			x = (x2+x3)/2;
			ax = (x1+x2)/2;
			ay = (y1+y2)/2;
			am = -(x1-x2)/(y1-y2);
			y = am*(x-ax)+ay;
		}else{
			ax = (x1+x2)/2;
			ay = (y1+y2)/2;
			am = -(x1-x2)/(y1-y2);	
			bx = (x2+x3)/2;
			by = (y2+y3)/2;
			bm = -(x2-x3)/(y2-y3);

			x = (am*ax-bm*bx-ay+by)/(am-bm);
			y = am*(x-ax)+ay;
		}
		
		printf("%.3lf %.3lf %.3lf\n", x, y, sqrt(pow(x1-x, 2)+pow(y1-y,2)));
	}
}