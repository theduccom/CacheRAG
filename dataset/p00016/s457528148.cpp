#include <iostream>
using namespace std;

double cos(double x){
	double c = 0.0;
	double y = 1.0;
	double n = 1;
	for(int i = 1; i < 30; i++){
		c += y / n;
		y = - y * x * x;
		n = 2 * i * (2 * i - 1) * n;
	}
	return c;
}

double sin(double x){
	double s = 0.0;
	double y = x;
	double n = 1;
	for(int i = 1; i < 30; i++){
		s += y / n;
		y = - y * x * x;
		n = 2 * i * (2 * i + 1) * n;
	}
	return s;
}

int main(){
	double x = 0.0, y = 0.0;
	double hosu;
	double angle = 90.0;
	double change;
	char c;
	while(cin >> hosu >> c >> change){
		if(hosu == 0 && change == 0) break;
		x += hosu * cos(angle / 180 * 3.14159);
		y += hosu * sin(angle / 180 * 3.14159);
		angle -= change;
	}
	cout << (int)x << endl;
	cout << (int)y << endl;
	return 0;
}