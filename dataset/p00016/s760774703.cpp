#define _USE_MATH_DEFINES
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<list>
#include<stack>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;

int main(){
	double D,A,x=0,y=0,r=0;
	while(scanf("%lf,%lf",&D,&A),D||A){
		x += D*sin(r/180*M_PI);
		y += D*cos(r/180*M_PI);
		r += A;
	}
	printf("%d\n%d\n",(int)x,(int)y);
}