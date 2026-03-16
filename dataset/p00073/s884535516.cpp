#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	int x, h;
	double s, a;
	while(true){
		cin>>x>>h;
		if(x==0 && h==0)break;
		a = (x*x)/(double)4 + h*h; 
		a= sqrt(a);
		s = a*x*2;
		s += x*x;
		printf("%.6f\n", s);
	}
	return 0;
}