#include <stdio.h>
#include <math.h>
typedef long double ld;
int main(){
	ld v;
	while(scanf("%Lf",&v)!=EOF){
		ld t=v/9.8;
		ld h=4.9*t*t;
		int n=ceil(h/5.0)+1.0;
		printf("%d\n",n);
	}
	return 0;
}