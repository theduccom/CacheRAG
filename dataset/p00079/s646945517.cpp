#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>
 
using namespace std;
 
#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#define X real()
#define Y imag()
typedef complex<double> P;

double cross(P a,P b){return a.X*b.Y-a.Y*b.X;}
int main(){
	
	double a,b;
	vector<P> p;
	while(scanf("%lf,%lf",&a,&b)!=EOF){
		p.push_back(P(a,b));
	}
	
	double sum = 0;
	reps(i,1,p.size()-1){
		sum += cross(p[i]-p[0],p[i+1]-p[0])/2;
	}
	
	printf("%.9lf\n",fabs(sum));
	
}