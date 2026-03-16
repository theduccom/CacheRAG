#include <iostream>
#include <cmath>
using namespace std;


int main(){
	double v;
	while(cin >> v){
		double t = v / 9.8;
		double y = 4.9 * t*t;
		int N = (int)ceil((y + 5) / 5);

		cout << N << endl;
	}

	return 0;
}