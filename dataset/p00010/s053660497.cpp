#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3;
	int n;
	double p, q, r;//円の中心を(p, q)、半径をrとする
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		
		p = ((pow(x1,2)-pow(x2,2))*(y2-y3)-(pow(x2,2)-pow(x3,2))*(y1-y2)-(y1-y2)*(y2-y3)*(y3-y1)) / (2*((x1-x2)*(y2-y3)-(x2-x3)*(y1-y2)));
		q = ((pow(y1,2)-pow(y2,2))*(x2-x3)-(pow(y2,2)-pow(y3,2))*(x1-x2)-(x1-x2)*(x2-x3)*(x3-x1)) / (2*((y1-y2)*(x2-x3)-(y2-y3)*(x1-x2)));
		r = sqrt(pow(x1-p,2)+pow(y1-q,2));
		
		//p += 0.0005; q += 0.0005; r += 0.0005;
		
		printf("%.3f %.3f %.3f\n", p, q, r);
	}
	return 0;
}