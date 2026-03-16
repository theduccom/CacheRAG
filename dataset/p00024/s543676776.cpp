#include <cstdio>

using namespace std;

int main(){
	
	double v,t,y;
	int N;
	
	while (scanf("%lf",&v)!=EOF){
	
		t=v/9.8;
		y=4.9*t*t;
		N=(int)(y+5)/5;
		
		printf("%d\n",N+1);
	}
		
	return 0;
}
 