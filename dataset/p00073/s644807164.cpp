#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	while(1){
		int x,h;
		cin>>x>>h;
		if(x==0&&h==0)break;
		printf("%f\n",x*x+2*x*sqrt(h*h+(double)x*x/4));
	}
}