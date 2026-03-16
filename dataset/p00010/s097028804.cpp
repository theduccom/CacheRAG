#include <cstdio>
#include <cmath>
#define LOOP(index,times) for(int index=0;index<times;index++)
using namespace std;

int main(){

int n;
float x[3],y[3],detA,a,b,px,py,r;

scanf("%d",&n);

LOOP(i,n){
	scanf("%f %f %f %f %f %f",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);

	detA=(x[0]-x[1])*(y[1]-y[2])-(x[1]-x[2])*(y[0]-y[1]);
	a=x[0]*x[0]-x[1]*x[1]+y[0]*y[0]-y[1]*y[1];
	b=x[1]*x[1]-x[2]*x[2]+y[1]*y[1]-y[2]*y[2];
	
	px=0.5/detA*((y[1]-y[2])*a-(y[0]-y[1])*b);
	py=0.5/detA*(-(x[1]-x[2])*a+(x[0]-x[1])*b);
	r=sqrt((px-x[0])*(px-x[0])+(py-y[0])*(py-y[0]));

	printf("%.3f %.3f %.3f\n",px,py,r);
}
return 0;		
}