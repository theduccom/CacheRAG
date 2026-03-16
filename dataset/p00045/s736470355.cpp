#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a, b, t = 0, n = 0;
	double s = 0;
	while(scanf("%d,%d", &a, &b) != EOF){
		t += a*b;s += b;n++;
		if(n == 3)break;
	}
	printf("%d\n%d\n", t, (int)(s/n+0.5));
	return 0;
}