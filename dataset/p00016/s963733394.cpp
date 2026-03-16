#include<bits/stdc++.h>
using namespace std;
static const double pi = 2.0 * acos(0.0);

int d, a;

int main(){
	double theta = pi / 2;
	double x = 0.0, y = 0.0;
	while(1){
		scanf("%d,%d", &d, &a);
		//cout << d << " " << a << endl;
		if(d == 0.0 && a == 0.0) break;
		x += d * cos(theta); y += d * sin(theta);
		theta -= (double)a / 180.0 * pi;
		//cout << x << " " << y << endl;
	}
	cout << (int)x << endl << (int)y << endl;
	return 0;
}