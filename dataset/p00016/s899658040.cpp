#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x = 0.0;
	double y = 0.0;
	double r = M_PI*0.5;
	while(1){
		int a,b;
		char com;
		cin >> a >> com >> b;
		if(a==0 && b==0) break;
		x += double(a)*cos(r);
		y += double(a)*sin(r);
		r -= M_PI*b/180.0;
	}
	int c = int(x);
	int d = int(y);
	cout << c << endl;
	cout << d << endl;
}