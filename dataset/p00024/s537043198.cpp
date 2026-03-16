#include <iostream>
#include <math.h>
using namespace std;



int main() {
	double a;
	while(cin >> a){
		double t = a/9.8;
		double y = 4.9*t*t;
		int y_c = ceil(y);
		int N = y_c/5 + (y_c%5 > 0);
		cout << N+1 << endl;
	}
	 
	return 0;
}