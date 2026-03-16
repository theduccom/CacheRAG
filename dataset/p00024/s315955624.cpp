#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	double v;
	double h, t, y;
	int N;
	
	while((scanf("%lf", &v)) != EOF){
		t = v / 9.8;
		y = 4.9 * pow(t, 2);
		
		N = y / 5 + 1;
		if((double)5 * N - 5 < y) N++;
		
		printf("%d\n", N);
	}
	
	return 0;
}