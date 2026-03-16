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

const double EPS = 0.1;

int main(){
	
	int a,b;
	double angle = M_PI/2;
	P pos = P(0,0);
	
	while(scanf("%d,%d",&a,&b)){
		if(a==0 && b==0)break;
		pos += P(cos(angle),sin(angle))*(double)a;
		angle -= b/180.0*M_PI;
	}
	
	printf("%d\n%d\n",(int)pos.X,(int)pos.Y);
}