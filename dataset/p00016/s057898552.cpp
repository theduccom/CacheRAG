#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second

using namespace std;

double deg,r,x=0,y=0,curdeg=0;

int main()
{
	while(true)
	{
		scanf("%lf,%lf",&r,&deg);
		if(r==0&&deg==0)
		break;
		x+=r*cos(M_PI/180*(90-curdeg));
		y+=r*sin(M_PI/180*(90-curdeg));
		curdeg+=deg;
	}
	printf("%d\n%d\n",(int)x,(int)y);
	return 0;
}