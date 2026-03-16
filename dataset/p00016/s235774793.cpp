#include <iostream>
#include <cmath>
using namespace std;

int main(){
	char t;
	int d, a;
	double x = 0, y = 0, rad = M_PI/2.0;
	while(cin >> d >> t >> a){
		if(!d && !a)break;
		x += cos(rad) * (double)d;
		y += sin(rad) * (double)d;
		rad -= a / 180.0 * M_PI;
	}
	cout << (int)x << endl << (int)y << endl;
	return 0; 
}