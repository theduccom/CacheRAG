#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define pb push_back

# define inOut(a,b) freopen(a,"r",stdin);freopen(b,"w",stdout);
# define RESET(a) memset(a,0,sizeof(a))
# define MEMO(a) memset(a,-1,sizeof(a))
# define DEBUG puts("Debug-Has-Come-Until-Here")


typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main(){
	cin.tie(NULL);

	double x1, x2, x3, y1, y2, y3;
	double a,b,c,d,e,f;
	double x,y;
	int dummy;
	
	scanf("%d", &dummy);
	while(scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF){
		a = -2*x1 + 2*x2;
		b = -2*y1 + 2*y2;
		c = (x2*x2 - x1*x1) + (y2*y2 - y1*y1);
		d = -2*x2 + 2*x3;
		e = -2*y2 + 2*y3;
		f = (x3*x3 - x2*x2) + (y3*y3-y2*y2);
		
		x = (c*e - b*f)/(a*e-b*d);
		y = (c*d - a*f)/(b*d-e*a);
		printf("%.3lf %.3lf %.3lf\n", x, y, sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)));
	}

	return 0;
}