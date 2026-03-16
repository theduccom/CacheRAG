#include <iostream>
#include <cmath>
using namespace std;

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

#define CINT cpp_int 

int main() {
	int n; cin >> n; CINT a, b; 
	CINT REF = pow(CINT(10), 80);
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a + b >= REF) cout << "overflow" << endl;
		else cout << a + b << endl;
	}
	return 0;
}
