#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
double len(double x1,double y1,double x2,double y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double solve(double a,double b,double c)
{
	double z;
	z=(a+b+c)/2;
	return sqrt(z*(z-a)*(z-b)*(z-c));
}
int main()
{
	double x[22],y[22];
	double ans=0.0;
	int c=0;
	for(;;c++)
	{
		if(scanf("%lf,%lf",&x[c],&y[c])==-1)break;
	}
	for(int i=1;i<c-1;i++)
	{
		ans+=solve(len(x[0],y[0],x[i],y[i]),len(x[i],y[i],x[i+1],y[i+1]),len(x[i+1],y[i+1],x[0],y[0]));
	}
	printf("%f\n",ans);
	return 0;
}