#include<cstdio>
#include<cmath>

int main(){
	double x1,y1,x2,y2,x3,y3,p,q,r;
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
		p = ((y1-y3)*(y1*y1 -y2*y2 +x1*x1 -x2*x2) -(y1-y2)*(y1*y1 -y3*y3 +x1*x1 -x3*x3)) / (2*(y1-y3)*(x1-x2)-2*(y1-y2)*(x1-x3));
		q = ((x1-x3)*(x1*x1 -x2*x2 +y1*y1 -y2*y2) -(x1-x2)*(x1*x1 -x3*x3 +y1*y1 -y3*y3)) / (2*(x1-x3)*(y1-y2)-2*(x1-x2)*(y1-y3));
		r = sqrt((x1 - p) * (x1 - p) + (y1 - q) * (y1 - q));
		printf("%.3f %.3f %.3f\n", p, q, r);
	}
	return 0;
}