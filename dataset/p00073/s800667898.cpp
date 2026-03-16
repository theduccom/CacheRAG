#include <cmath>
#include <cstdio>
#include <iostream>
int main(){
	int x,h;
	while(std::cin>>x>>h,x!=0||h!=0)std::printf("%.6f\n",x*x+2*x*sqrt(x*x*.25+h*h));
}