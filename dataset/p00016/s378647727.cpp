#include <stdio.h>
#include <math.h>

int main(){
	int t, n, r;
	double x, y;
	
	x = 0.0;
	y = 0.0;
	t = 90;
	while(true){
		scanf("%d,%d", &n, &r);
		if(n == 0 && r == 0){
			break;
		}
		
		x += n*cos(t*M_PI/180.0);
		y += n*sin(t*M_PI/180.0);
		t -= r;
			
	}
	
	printf("%d\n%d\n", (int)x, (int)y);
	
	return 0;
}