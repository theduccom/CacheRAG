#include<cstdio>
#include<cmath>

using namespace std;

int main(void){
	double x,h;
	while(scanf("%lf%lf", &x, &h) && x != 0 && h != 0 ){
		double y = sqrt( (x/2)*(x/2) + h*h );
		printf("%lf\n",2*y*x+x*x);
	}
	return 0;
}