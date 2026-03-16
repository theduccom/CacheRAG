#include <stdio.h>
#include <math.h>

#define PI 3.1415926535898
#define ANGLE (PI/180.0)
int main(){
	int step,dir;
	double x=0.0, y=0.0, angle=0.0;
	
	while(1){
		scanf("%d,%d", &step, &dir);
		if(step==0 && dir==0) break;
		x += (double)(step) * sin( angle*ANGLE );
		y += (double)(step) * cos( angle*ANGLE );
		angle += (double)dir;
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}