#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
bool  a[50001];
int b[25000];
int main() {
	int c = 0;
	fill(a, a + 50001, true);
	a[0] = false; a[1] = false;
	for (int i = 2; i <= 50000;) {
		if (a[i]) {
			int j = 2;
			while (i*j <= 50000) {
				a[i*j] = false;
				j++;
			}
			b[c] = i;
			c++;
		}
		if (i == 2) i++;
		else i += 2;
	}
	int n;
	while (cin >> n&&n != 0) {
		int i = 0;
		map<int, int> d;
		while (b[i] <= n&&i != c) {
			if (a[n - b[i]]) {
				d.insert(map<int, int>::value_type(min(b[i], n - b[i]), max(b[i], n - b[i])));
			}
			i++;
		}
		cout << d.size() << endl;
	}
}