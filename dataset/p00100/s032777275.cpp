#include <iostream>
#include <math.h>
using namespace std;
int main() {
	while (1) {
		/*for (int i = 0; i < n; i++) {
			e[i] = 0;
		}
		for (int i = 0; i < 4000; i++) {
			m[i] = 0;
			pr[i] = 0;
		}
		na = 1;*/
		int n = 0, p, q, na = 1, e[4000] = {}, pr[4000] = {};
		unsigned long long int m[4000] = {};

		cin >> n;
		if (n == 0)
			break;

		for (int i = 0; i < n; i++) {
			cin >> e[i] >> p >> q;
			m[e[i] - 1] += p * q;
			if (m[e[i] - 1] >= 1000000 && pr[e[i] - 1] == 0) {
				cout << e[i] << endl;
				pr[e[i] - 1] = 1;
				na = 0;
			}
		}
		
		if (na)
			cout << "NA\n";

	}
	return 0;
}
