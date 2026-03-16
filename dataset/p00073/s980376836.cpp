#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	double x,h;
	
	while(1){
		scanf("%lf %lf",&x,&h);
		if(x+h==0) break;
		else printf("%lf\n",(x*x)+2*x*sqrt((h*h)+((x/2)*(x/2))));
	}
	return 0;
}