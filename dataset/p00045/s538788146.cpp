#include<iostream>
using namespace std;
int main() {
	int a, b;
	char c;
	int x;
	double y;
	x = 0;
	y = 0;
	int z = 0;
	double i = 0;
	while (cin >> a >> c >> b){
		x += a*b;
		y += b;
		z += b;
		i++;
	}
	cout << x << endl;
	y /= i;
	z /= i;
	if (y - z >= 0.5) {
		z += 1;
	}
	cout << z <<endl;
}