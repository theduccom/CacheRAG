#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

int main(void){

	double x,h;
	
	while(1){
		cin>>x;
		cin>>h;
		if(x==0&&h==0) break;
		printf("%.6f\n",2*x*(sqrt(pow(h,2)+pow(x,2)/4))+pow(x,2));
	}
	return 0;
}