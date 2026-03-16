
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <complex>

using namespace std;

typedef complex<double> xy_t;
char c;
double x, y;
xy_t P[20];
const int MAX = 10000000;

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }

int main(void){

	
	int k = 0;
	while(cin >> x >> c >> y){
		P[k] = xy_t(x, y);
		k++;
	}

	
	double ans = 0;

	for(int i = 1; i < k - 1; i++){
			ans += abs(0.5 * cross_product(xy_t (P[i] - P[0]), xy_t (P[i + 1] - P[0])));
	}


	printf("%.6f\n", ans);
	
    return 0;
}