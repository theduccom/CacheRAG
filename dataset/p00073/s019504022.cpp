#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int x, h;
	double S;
	while(1){
		scanf("%d", &x );
		scanf("%d", &h );
		if( !x && !h )	break;
		double b = sqrt( x*x/4.0 + h*h );
		S = x*x + 2*b*x;
		printf("%.6f\n", S);
	}
	return 0;
}