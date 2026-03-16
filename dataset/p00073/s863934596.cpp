#include <iostream>
#include <iomanip>
using namespace std;

double root(double x){
	double e = 0.00000001;
	double a = x;
	double b = 0;
	double c;
	while(a - b > e){
		c = (a + b) / 2;
		if(c * c < x){
			b = c;
		}else{
			a = c;
		}
	}
	return c;
}

int main(){
	double x;
	double h;
	while(cin >> x >> h){
		if(x == 0 && h == 0) break;
		double area = x * x + 2 * root((x * x / 4) + (h * h)) * x;
		cout << showpoint << setprecision(15) << area << endl;
	}
	return 0;
}