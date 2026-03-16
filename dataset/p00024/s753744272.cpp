#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	double v;
	while(cin >> v){
		double t = v / 9.8;
		double y = (v*v) / 19.6;
		double N = y/5 + 1;
		int n = (int)(N+1);

		cout << n << endl;
	}
	return 0;
}