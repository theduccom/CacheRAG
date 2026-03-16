#include <iostream>
#include <iomanip>
using namespace std;

double root(double x){
	double e = 0.000000001;
	double a = x;
	double b = 0;
	double c;
	if(x >= 1){
		while(a - b > e){
			c = (a + b) / 2;
			if(c * c < x){
				b = c;
			}else{		
				a = c;
			}
		}
		return a;
	}else{
		a = 1;
		b = x;
		while(a - b > e){
			c = (a + b) / 2;
			if(c * c < x){
				b = c;
			}else{
				a = c;
			}
		}
		return a;
	}
}

struct point{
	double x;
	double y;
};

double get_a(point p0, point p1, point p2){
	double dx1 = p1.x - p0.x, dy1 = p1.y - p0.y;
	double dx2 = p2.x - p0.x, dy2 = p2.y - p0.y;
	double dx12 = p2.x - p1.x, dy12 = p2.y - p1.y;
	double a = root(dx1 * dx1 + dy1 * dy1);
	double b = root(dx2 * dx2 + dy2 * dy2);
	double c = root(dx12 * dx12 + dy12 * dy12);
	double z = (a + b + c) / 2;
	double s = root(z * (z - a) * (z - b) * (z - c));
	return s;
}

int main(){
	double area = 0;
	int count = 0;
	point ps[20];
	point p;
	char c;
	while(cin >> p.x >> c >> p.y){
		ps[count++] = p;
	}
	for(int i = 1; i < count - 1; i++){
		area += get_a(ps[0], ps[i], ps[i+1]);
	}
	cout << showpoint << setprecision(15) << area << endl;
	return 0;
}