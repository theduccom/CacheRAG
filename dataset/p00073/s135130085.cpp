#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include<stdio.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)

using namespace std;

int main(){
	double x, h;
	double ans;
	while (cin >> x >> h) {
		
		
		if (x == 0 && h == 0) {
			break;
		}
		ans = x * x + x * sqrt(h*h + (x / 2)*(x / 2)) * 2;
		printf("%.6lf\n", x * x + x * sqrt(h*h + (x / 2)*(x / 2)) * 2);
	}
	return 0;
}
