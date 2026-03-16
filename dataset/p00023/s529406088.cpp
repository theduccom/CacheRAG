#include <cstdio>
#include <cmath>
using namespace std;

double dist(double dx, double dy){
	return sqrt(pow(dx, 2) + pow(dy, 2));
}

int main(){
	int N;
	double xa, ya, ra, xb, yb, rb;
	int res;
	double p_d;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &ra, &xb, &yb, &rb);
		
		p_d = dist(xa - xb, ya - yb);
		
		if(ra + rb < p_d) res = 0;
		else if(p_d + ra < rb) res = -2;
		else if(p_d + rb < ra) res = 2;
		else res = 1;
		
		printf("%d\n", res);
	}
	
	return 0;
}