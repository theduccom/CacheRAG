#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){ 
	double x,h;
	double sum;
	while(true){
		scanf("%lf %lf",&x,&h);
		if(x==0 && h==0){
			break;
		}
		sum=pow(x,2);
		h=sqrt(pow(x/2,2)+pow(h,2));
		sum=sum+2*h*x;
		printf("%0.6lf\n",sum);
	}
}