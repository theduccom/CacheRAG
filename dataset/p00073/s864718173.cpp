#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <bitset>
#include <complex>
using namespace std;

const double EPS = 1e-9;
const double PI = 3.14159265359;

typedef complex<double> P;

int main(){
	double x, h;

	while(cin >> x >> h, x+h){
		printf("%lf\n", sqrt(x*x/4+h*h)*x*2+x*x);
	}

	return 0;
}