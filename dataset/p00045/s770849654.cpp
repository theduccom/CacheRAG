
#include <iostream>
#include <string>
using namespace std;

int main () {
	int x, y,count=0;
	char c;
	double a=0.0, b=0.0;
	while(cin >> x) {
		cin >> c;
		cin >> y;
		a += x*y;
		b += y;
		count++;
	}
	b /= count;
	y = (int)b + ( ( b - (int)b ) < 0.5 ? 0 : 1 );
	cout << a << "\n" << y << endl;
	return 0;
}