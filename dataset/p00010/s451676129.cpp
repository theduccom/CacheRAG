#include<iostream>
#include<cmath>

using namespace std;

int main(void){
	
	int n;
	double x[3]={0},y[3]={0},r,a,b,c,d[2]={0},e[2]={0},f[2]={0},l,m;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		
		a=b=c=r=l=m=0;
		for(int i=0;i<2;i++){
			d[i]=e[i]=f[i]=0;
		}
		for(int i=0;i<3;i++){
			x[i]=y[i]=0;
		}

		scanf("%lf %lf %lf %lf %lf %lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);

		a=sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]));	//ツ各ツ陛督づ個陳キツつウ
		b=sqrt((x[2]-x[1])*(x[2]-x[1])+(y[2]-y[1])*(y[2]-y[1]));
		c=sqrt((x[0]-x[2])*(x[0]-x[2])+(y[0]-y[2])*(y[0]-y[2]));	
	
		r=a*b*c/sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));			//ツ外ツ静堋円ツづ個板シツ径
		
		d[0]=2*(x[1]-x[0]);
		e[0]=2*(y[1]-y[0]);
		f[0]=x[0]*x[0]-x[1]*x[1]+y[0]*y[0]-y[1]*y[1];
		d[1]=2*(x[2]-x[0]);
		e[1]=2*(y[2]-y[0]);
		f[1]=x[0]*x[0]-x[2]*x[2]+y[0]*y[0]-y[2]*y[2];

		l=(e[0]*f[1]-e[1]*f[0])/(d[0]*e[1]-d[1]*e[0]);
		m=(f[0]*d[1]-f[1]*d[0])/(d[0]*e[1]-d[1]*e[0]);

		l=round(l*1000)/1000;
		m=round(m*1000)/1000;
		r=round(r*1000)/1000;
		
		printf("%.03lf %.03lf %.03lf\n",l,m,r);
	}
	return 0;
}