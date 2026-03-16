#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

double x[20],y[20];

int main(){
	int c=0;
	while(scanf("%lf,%lf",&x[c],&y[c])!=EOF){c++;}
	double ans=x[0]*y[c-1]-x[c-1]*y[0];
	for(int i=1;i<c;i++)ans+=x[i]*y[i-1]-x[i-1]*y[i];
	if(ans<0)ans*=-1;
	printf("%.6f",ans/2);
}