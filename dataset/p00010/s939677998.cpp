#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	int d;
	for(cin>>d;d>0;d--){
		double x1,x2,x3;
		double y1,y2,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;

		double A1=2*(x2-x1);
		double B1=2*(y2-y1);
		double C1=(x1*x1)-(x2*x2)+(y1*y1)-(y2*y2);
		double A2=2*(x3-x1);
		double B2=2*(y3-y1);
		double C2=(x1*x1)-(x3*x3)+(y1*y1)-(y3*y3);
		double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		double b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		double c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		double t1=(A1*B2-A2*B1);
		double t2=(B1*C2-B2*C1);
		double t3=(C1*A2-C2*A1);
		printf("%.3lf %.3lf %.3lf",
				t2/t1,t3/t1,(a*b*c)/sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c)));
		cout<<endl;
	}
	return 0;
}