#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
	while(1){
		double x,h,S;
		cin >> x;
		cin >> h;
		if(!x&&!h)	break;
		S = x*x;
		S += (sqrt(x*x/4+h*h)*x*2);
		printf("%.7lf\n",S);
	}
	return 0;
}
