#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	double v;
	double t,y;
	int n;
	while(cin >> v){
		t = v/9.8;
		y = 4.9 * t * t;

		n = ((y+5)/5)+1;

		cout << n << endl;
	}
}