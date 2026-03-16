#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	double x[6];
	double y[6];
	int i,j,k,n;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			cin>>x[j]>>y[j];
		}
		x[3]=2*(x[1]-x[0]);
		x[4]=2*(y[1]-y[0]);
		x[5]=x[0]*x[0]-x[1]*x[1]+y[0]*y[0]-y[1]*y[1];
		y[3]=2*(x[2]-x[0]);
		y[4]=2*(y[2]-y[0]);
		y[5]=x[0]*x[0]-x[2]*x[2]+y[0]*y[0]-y[2]*y[2];
		x[0]=(x[4]*y[5]-y[4]*x[5])/(x[3]*y[4]-y[3]*x[4]);
		y[0]=(x[5]*y[3]-y[5]*x[3])/(x[3]*y[4]-y[3]*x[4]);
		x[1]=(x[2]-x[0])*(x[2]-x[0])+(y[2]-y[0])*(y[2]-y[0]);
		x[1]=sqrt(x[1]);
		printf("%.3f %.3f %.3f\n",x[0],y[0],x[1]);
	}
	return 0;
}