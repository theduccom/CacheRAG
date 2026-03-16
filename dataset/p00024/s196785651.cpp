#include<iostream>
#include<cstdio>
#include<cmath>
#include <string> 
using namespace std;

int main(){
	double v;
	while( scanf("%lf",&v)!=EOF){
		v=ceil((v*v/19.6+5)/5);
		printf("%d\n",(int)v);
	}
			
	return 0;
}