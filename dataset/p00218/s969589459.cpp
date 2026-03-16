#include<iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n&&n != 0) {
		for (int i = 0; i < n; i++) {
			int e, f, g, a = 0, b = 0, c = 0;
			char l;
			cin >> e >> f >> g;
			if (e == 100 || f == 100 || g == 100)
				a++;
			if ((e + f) / 2 >= 90)
				a++;
			double d = (e + f + g) / 3;
			if (d >= 80)
				a++;
			if (d >= 70)
				b++;
			if (d >= 50 && (e >= 80 || f >= 80))
				b++;
			if (a != 0 )
				cout << 'A' << endl;
			else if (b != 0)
				cout << 'B' << endl;
			else
				cout << 'C' << endl;
		}
	}
}