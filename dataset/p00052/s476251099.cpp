#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;

int main() {
	int n, count; cpp_int cppi;
	while (1) {
		cin >> n; if (n == 0) break;
		count = 0; cppi = 1;
		for (int i = 2; i <= n; i += 2) cppi *= i;
		for (int i = 5; i <= n; i += 10) cppi *= i;
		while (cppi % 10 == 0) { cppi /= 10; count++; }
		cout << count << endl;
	}
	return 0;
}
