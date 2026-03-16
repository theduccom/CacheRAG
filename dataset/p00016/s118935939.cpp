#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
 
using namespace std;
 
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	double x = 0, y = 0;
	double m, d;
	char c;
	double next = 0;
	while(cin >> m >> c >> d && (m != 0 || d != 0) ){
		double rad = (90 - next) / 180.0 * M_PI;
		x += m * cos(rad);
		y += m * sin(rad);
		next += d;
	}
	
	cout << (int)x << endl;
	cout << (int)y << endl;
	
	return 0;
}