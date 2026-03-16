#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double v, t, y, n;
	while(cin >> v){
		t = v / 9.8;
		y = 4.9 * t * t;
		n = (int)(ceil(y/5.0)) + 1;
		cout << n << endl;
	}
	return 0;
}