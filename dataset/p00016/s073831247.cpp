#include<stdio.h>
#include<math.h>
int main(){
	double x=0,y=0,angle=90,a,b;
	int ix,iy;
	for(;;){
		scanf("%lf,%lf",&a,&b);
		if(a==0 && b==0){break;}
		x+=(cos(angle*3.1415926/180))*a;
		y+=(sin(angle*3.1415926/180))*a;
		angle-=b;
	}
	ix=x;
	iy=y;
	printf("%d\n%d\n",ix,iy);
	return 0;
}