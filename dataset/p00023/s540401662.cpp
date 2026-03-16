#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;cin >> n;
	double x1, y1, r1, x2, y2, r2;
	while(n--){
		int a = 1;
		cin >>x1>>y1>>r1>>x2>>y2>>r2;
		double d = pow(y2-y1, 2)+pow(x2-x1, 2);
		d = sqrt(d);
		if(d > (r1 + r2))a = 0;
		else if(r1 > d + r2)a = 2;
		else if(r2 > d + r1)a = -2;
		cout << a << endl;
	}
	return 0; 
}