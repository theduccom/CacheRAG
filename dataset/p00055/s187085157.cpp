#include <iostream>
#include <cstdio>
using namespace std;

double a, seq[10];

void solve() {
	seq[0] = a;

	double sum = a;
	for (int i = 1; i < 10; i++) {
		if (i % 2) {
			seq[i] = seq[i-1] * 2.0;
		} else {
			seq[i] = seq[i-1] / 3.0;
		}
		sum += seq[i];
	}

	//cout<<sum<<endl;
	printf("%.8f\n", sum);
}

int main(int argc, const char *argv[]) {
	while (cin>>a) {
		solve();
	}
	return 0;
}