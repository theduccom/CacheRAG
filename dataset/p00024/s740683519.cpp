#include <cstdio>

using namespace std;

int main()
{
	// v = 9.8t y = 4.9t^2
	
	double t,y,x;
	int n;
	
	while(scanf("%lf", &x) != EOF){
	
		t = x / 9.8;
		y = 4.9 * t * t;
		
		n = y;
		
		n /= 5;
		
		printf("%d\n", n+2);
	}
	return(0);
}