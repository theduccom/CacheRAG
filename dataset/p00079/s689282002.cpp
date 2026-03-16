#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <queue>
#include <set>
#include <map>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <bitset>
#include <complex>
using namespace std;

const double EPS = 1e-9;
const double PI = 3.14159265359;

typedef complex<double> p;

double GetArea(p a, p b, p c){
	double la, lb, lc, lz;
	la = abs(b-a);
	lb = abs(c-b);
	lc = abs(a-c);
	lz = (la+lb+lc)/2;

	return sqrt(lz*(lz-la)*(lz-lb)*(lz-lc));
}

int main(){
	double x, y;
	vector<p> pv;

	while(~scanf("%lf,%lf", &x, &y)){
		pv.push_back(p(x, y));
	}

	double s = 0.0;
	for(int i = 0; i+1 < pv.size(); i++){
		s += GetArea(pv[0], pv[i], pv[i+1]);
	}

	printf("%lf", s);

	return 0;
}