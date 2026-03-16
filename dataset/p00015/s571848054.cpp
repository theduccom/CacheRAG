#include <iostream>
#include <cmath>
using namespace std;

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

using Cint = cpp_int;

int main() {
	Cint temp_1, temp_2; int n; cin >> n;
	Cint max = pow((Cint)10, 80);
	for (int i = 0; i < n; i++) {
		cin >> temp_1 >> temp_2;
		if (temp_1 + temp_2 >= max) cout << "overflow" << endl;
		else cout << temp_1 + temp_2 << endl;
	}
	return 0;
}
