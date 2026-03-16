#include <iostream>
#include <math.h>

using namespace std;

int main(void){
	double v;
	double t, h;

	while(cin >> v){
		t = v / 9.8;
		h = 4.9 * t * t;
		cout << ceil(h/5) + 1 << endl;
	}
}