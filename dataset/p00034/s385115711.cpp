#include <iostream>
using namespace std;

int main() {
	int v1, v2;
	int l[10];
	int ls;
	char c;
	while (cin >> l[0] >> c) {
		for (int i=1; i<10; i++)
			cin >> l[i] >> c;
		cin >> v1 >> c >> v2;

		ls = 0;
		for (int i=0; i<10; i++)
			ls += l[i];
		
		double in = ((double)v1)/(v1+v2)*ls;
		int dis = 0;
		for (int i=0; i<10; i++) {
			dis += l[i];
			if ((double)dis >= in) { cout << i+1 << endl; break; }
		}
	}
	return 0;
}