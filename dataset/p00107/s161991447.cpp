#include <iostream>
#include <cmath>

using namespace std;

int A, B, C;
int R;

double norm(double x, double y) {
	return sqrt(x * x + y * y);
}

bool isok() {
	return (norm(A, B) / 2.0 < R || norm(B, C) / 2.0 < R || norm(C, A) / 2.0 < R);
}

int main() {
	while (1) {
		cin >> A >> B >> C; if (A == 0 && B == 0 && C == 0) break;
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> R;
			if (isok()) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
	
	return 0;
}