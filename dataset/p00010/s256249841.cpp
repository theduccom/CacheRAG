#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	double x[4],y[4],a[3],b[3],c[3],cx[1000],cy[1000],rx,ry,r[1000];
	int i,n,j;
	
	scanf("%d",&n);
	for(j=0;j<n;j++){
	
	for(i=0;i<3;i++)scanf("%lf%lf",&x[i],&y[i]);
	a[0]=2*(x[1]-x[0]);
	b[0]=2*(y[1]-y[0]);
	c[0]=x[0]*x[0]-x[1]*x[1]+y[0]*y[0]-y[1]*y[1];
	a[1]=2*(x[2]-x[0]);
	b[1]=2*(y[2]-y[0]);
	c[1]=x[0]*x[0]-x[2]*x[2]+y[0]*y[0]-y[2]*y[2];
	
	cx[j]=(b[0]*c[1]-b[1]*c[0])/(a[0]*b[1]-a[1]*b[0]);
	cy[j]=(c[0]*a[1]-c[1]*a[0])/(a[0]*b[1]-a[1]*b[0]);
	
	rx=x[0]-cx[j];
	ry=y[0]-cy[j];
	r[j]=sqrt(rx*rx+ry*ry);
	
	}
	
	for(i=0;i<n;i++)printf("%.3f %.3f %.3f\n",cx[i],cy[i],r[i]);
	
	return 0;
}