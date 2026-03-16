#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct P {
	string a;
	int b;
};

int main() {
	string a;
	int b;
	P retu[110];
	int i = 0;
	while (cin >> a >> b) {
		P p;
		p.a = a;
		p.b = b;
		retu[i] = p;
		i++;
	}
	for (int j = i; j > 0; j--) {
		for (int k = 0; k < j-1; k++) {
			if (retu[k].a > retu[k+1].a) {
				swap(retu[k], retu[k+1]);
			} else if (retu[k].a == retu[k+1].a) {
				if (retu[k].b > retu[k+1].b) {
					swap(retu[k], retu[k+1]);
				}
			}
		}
	}
	for (int j = 0; j < i; j++) {
		if (j == 0) {
			cout << retu[0].a << endl << retu[0].b;
		} else {
			if (retu[j].a == retu[j-1].a) {
				cout << ' ' << retu[j].b;
			} else {
				cout << endl << retu[j].a << endl << retu[j].b;
			}
		}
	}
	cout << endl;
	return 0;
}