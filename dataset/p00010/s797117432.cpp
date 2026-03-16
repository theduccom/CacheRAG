#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <bitset>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<long long int,long long int> 
#define ff first
#define pb push_back
#define ss second
#define ll long long 
#define ull unsigned long long
#define vi vector<long long int>
#define vii vector<pii>
#define vvi vector <vi>
#define rep(x,a,b,c) for(int x=a;x<=b;x+=c)
#define repp(x,a,b) rep(x,a,b,1)
#define rev(x,a,b,c) for(int x=a;x>=b;x-=c)
#define revv(x,a,b) rev(x,a,b,1)
#define OO (int)2e9
#define INF (ll)1e18
 
using namespace std;

double a,b,c,d,xx,yy,x2,y2,x3,y3;
int tc;

double xc()
{
	return ((xx*xx+yy*yy)*(y2-y3)+(x2*x2+y2*y2)*(y3-yy)+(x3*x3+y3*y3)*(yy-y2))/(double)d;
}

double yc()
{
	return ((xx*xx+yy*yy)*(x3-x2)+(x2*x2+y2*y2)*(xx-x3)+(x3*x3+y3*y3)*(x2-xx))/(double)d;
}

double rads()
{
	return sqrt(abs(xx-xc())*abs(xx-xc())+abs(yy-yc())*abs(yy-yc()));
}

double findabc()
{
	a=sqrt((abs(x2-xx))*(abs(x2-xx))+(abs(y2-yy))*(abs(y2-yy)));
	b=sqrt((abs(x3-x2))*(abs(x3-x2))+(abs(y3-y2))*(abs(y3-y2)));
	c=sqrt((abs(x3-xx))*(abs(x3-xx))+(abs(y3-yy))*(abs(y3-yy)));
	d=2*(xx*(y2-y3)+x2*(y3-yy)+x3*(yy-y2));
}

int main()
{
	scanf("%d",&tc);
	while(tc--)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&xx,&yy,&x2,&y2,&x3,&y3);
		findabc();
		//printf("%.3lf %.3lf %.3lf",a,b,c);
		printf("%.3lf %.3lf %.3lf\n",xc(),yc(),rads());
	}
	return 0;
}