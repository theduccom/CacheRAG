#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	double x, h;
	double S;
	
	while(true){
		scanf("%lf%lf", &x, &h);
		
		if(x == 0 && h == 0) break;
		
		S = x * x + x * sqrt(x * x / 4 + h * h) * 2;
		
		printf("%lf\n", S);
	}
	
	return 0;
}