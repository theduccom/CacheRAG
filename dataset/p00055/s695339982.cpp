#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main(){
	double a;
	while(cin>>a){
		double sum=211.0*a/27.0;
		printf("%.8lf\n",sum);
	}
	return 0;
}