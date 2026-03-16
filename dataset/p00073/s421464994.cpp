#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
	int x,h;
	while(cin>>x>>h){
	if(x==0&&h==0)break;
		double S = (double)x*(double)x+4.0*(double)x*sqrt(((double)x/2)*((double)x/2)+(double)h*(double)h)/2.0;
		printf("%.6lf\n",S);
	}
	return 0;
}