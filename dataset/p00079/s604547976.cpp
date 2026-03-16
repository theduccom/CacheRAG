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

struct Point{
	double x,y;
};

double GetDist(Point p,Point q){
	double a,b;
	a = p.x-q.x; b = p.y-q.y;
	return sqrt(a*a+b*b);
}

int main(){
	Point P[20];
	double ans=0;
	for(int i=0;scanf("%lf,%lf",&P[i].x,&P[i].y)!=EOF;i++){
		if(i>=2){
			double a,b,c;
			a = GetDist(P[0],P[i-1]);
			b = GetDist(P[i-1],P[i]);
			c = GetDist(P[i],P[0]);
			double z = (a+b+c)/2;
			ans += sqrt(z*(z-a)*(z-b)*(z-c));
		}
	}
	printf("%lf\n",ans);
}