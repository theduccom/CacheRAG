#include <iostream>

using namespace std;

int main()
{
	double t, v;
	int y;
	while (cin >> v){
		t = y = 0;
		t = v / 9.8;
		y = 4.9 * t * t;
		if (y < 4.9 * t * t){
			y += 5;
		}
		cout << y / 5 + 1 << endl;
	}
	return (0);
}