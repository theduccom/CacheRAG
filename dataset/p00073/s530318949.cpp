#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double x,h;
	while(1){
		cin >> x;
		cin >> h;
		if(x == 0 && h == 0) break;
		double ans = x * x;
		double tmp = x / 2;
		double a = tmp*tmp+h*h;
		double b = sqrt(a);
		double c = x * b / 2;
		double d = c * 4;
		ans += d;
		printf("%.6f\n",ans);
	}
}