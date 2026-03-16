#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	double s;

	while(!cin.eof()) {
		cin >> s;
		if(!cin.eof()) { cout << ceil(((s/9.8)*(s/9.8)*4.9+5)/5) << endl; }
	}

	return 0;
}