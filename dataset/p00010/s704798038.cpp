#include <cstdio>
#include <cmath>

int n;
double x[3],y[3];
struct data{
	double a,b,c;
	data(double aa,double bb,double cc){
		a=aa;
		b=bb;
		c=cc;
	}
};

struct data2{
	double x,y,r;
	data2(){

	}
	data2(double xx,double yy,double rr){
		x=xx;
		y=yy;
		r=rr;
	}
};

data make_line(int i,int j){
	if(x[i]==x[j]){
		return data(0.0,(y[i]+y[j])/2.0,1);
	}
	if(y[i]==y[j]){
		return data((x[i]+x[j])/2,0,0); 
	}
	double aa=(y[i]-y[j])/(x[i]-x[j]);
	aa=-1.0/aa;
	double bb=(y[i]+y[j])/2.0-(x[j]+x[i])/2.0*aa;
	return data(aa,bb,1);
}

data2 cross(data y1,data y2){
	data2 d;
	if(y1.c==0){
		d.x=y1.a;
		d.y=y2.a*d.x+y2.b;
	}
	if(y2.c==0){
		d.x=y2.a;
		d.y=y1.a*d.x+y1.b;
	}
	if(y1.c==1 && y2.c==1){
		d.x=-(y1.b-y2.b)/(y1.a-y2.a);
		d.y=y1.a*d.x+y1.b;
	}
	d.r=sqrt(pow(d.x-x[0],2)+pow(d.y-y[0],2));
	return d; 
}

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			scanf("%lf %lf",&x[j],&y[j]);
		}
		data y1=make_line(0,1);
		//printf("%.3f %.3f\n",y1.a,y1.b);
		data y2=make_line(0,2);
		//printf("%.3f %.3f\n",y2.a,y2.b);
		data2 y3=cross(y1,y2);
		printf("%.3f %.3f %.3f\n",y3.x,y3.y,y3.r);
	}
	return 0;
}