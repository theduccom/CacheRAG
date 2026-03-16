#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	int x,h;
	while(cin >> x >> h && (x!=0&&h!=0)){
		printf("%f\n",x*x + ((2*(x*sqrt(x*x+4.*h*h)))/2));
	}
	return 0;
}