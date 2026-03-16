#include <stdio.h>
#include <math.h>


int main(){
	double x = 0,y = 0;
	int tmp_x,tmp_y,degree=90;

	while(true){
		scanf("%d,%d",&tmp_x,&tmp_y);
		if(tmp_x == 0 && tmp_y == 0)break;
		x += tmp_x*cos(degree*M_PI/180);
		y += tmp_x*sin(degree*M_PI/180);
		degree -= tmp_y;
	}

	printf("%d\n",(int)x);
	printf("%d\n",(int)y);

    return 0;
}