#include<iostream>
using namespace std;

int main() {
	int a[10];
	int b, c;
	while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
		&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],
		&a[7],&a[8],&a[9],&b,&c)+1) {
		int dis=0;
		for (int i = 0; i < 10; i++) {
			dis += a[i];
		}
		double disa;
		disa = static_cast<double>(dis);
		int speed = b + c;
		double x = disa / speed * b;
		int y = static_cast<int>(x);
		int j = 0;
		while (1) {
			if( y - a[j] <= 0) { break; }
			y -= a[j];
			j++;
		}
		cout << j + 1 << endl;
	}
	return 0;
}