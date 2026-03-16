#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	double x, h;
	double l;
	double ans;

	while(cin >> x >> h, x || h){
		l = sqrt(pow(x/2, 2)+pow(h, 2));

		ans = x*l*2 + pow(x, 2);

		printf("%f\n", ans);

	}
}