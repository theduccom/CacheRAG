#include<stdio.h>
#include<math.h>

const double eps = 1e-10;

int main(void){
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		double ax, ay, ar, bx, by, br;
		scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &ar, &bx, &by, &br);
		double x = pow(ax-bx,2);
		double y = pow(ay-by,2);
		double d = sqrt(x+y);
		
		if(d>ar+br){
			puts("0");
		}else if(ar+d < br){
			puts("-2");
		}else if(br+d < ar){
			puts("2");
		}else{
			puts("1");
		}
	}
	
	return 0;
}