#include<iostream>

using namespace std;

int main(void) {
	int n, tmp, sum, suml[10];
	int i, j;

	while(true) {
		cin >> n;
		if(n == 0) { break; }
		for(i = 0; i < 10; i++) {
			suml[i] = 0;
		}
		for(i = 0; i < n; i++) {
			sum = 0;
			for(j = 0; j < n; j++) {
				cin >> tmp;
				cout.width(5);
				cout << tmp;
				suml[j] += tmp;
				sum += tmp;
			}
			cout.width(5);
			cout << sum << endl;
		}
		sum = 0;
		for(i = 0; i < n; i++) {
			cout.width(5);
			cout << suml[i];
			sum += suml[i];
		}
		cout.width(5);
		cout << sum << endl;
	}

	return 0;
}