#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int a,b,s=0,t=0,n=0;
	while(scanf("%d,%d",&a,&b)!=EOF){s+=a*b;t+=b;n++;}
	double u=(t+0.0)/n+0.5;
	cout<<s<<endl<<(int)u<<endl;
}