#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
struct P{
	double x,y;
};
P p[100];
double func(int i){
	double a = sqrt((p[0].x - p[i-1].x)*(p[0].x - p[i-1].x)+(p[0].y - p[i-1].y)*(p[0].y - p[i-1].y));
	double b = sqrt((p[0].x - p[i].x)*(p[0].x - p[i].x)+(p[0].y - p[i].y)*(p[0].y - p[i].y));
	double c = sqrt((p[i].x - p[i-1].x)*(p[i].x - p[i-1].x)+(p[i].y - p[i-1].y)*(p[i].y - p[i-1].y));
	double z = (a + b + c)/2;
	return sqrt(z*(z-a)*(z-b)*(z-c));
}
int main(){
	double x,y;
	int cnt = 0;
	while(~scanf("%lf,%lf",&p[cnt].x,&p[cnt].y)){
		cnt++;
	}
	double ans = 0;
	for(int i = 2; i < cnt; i++){
		ans += func(i);
	}
	printf("%.6lf\n",ans);
}