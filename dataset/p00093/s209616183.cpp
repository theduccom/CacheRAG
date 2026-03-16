#include<iostream>

using namespace std;

int main() {
	int a[3000], b[3000],n=0;
	while(1){
		cin >> a[n] >> b[n];
	if (a[n] == 0 && b[n] == 0)break;
		n++;
	}
	for(int j=0;j<=n;j++){
		if (a[j] == 0 && b[j] == 0)break;
		int cnt = 0;
		if (j != 0)cout << endl;
		for (int i = a[j]; i <= b[j]; i++) {
			
			
			if (i % 4 == 0) {
				if (i % 100 == 0) {
					if (i % 400 == 0) {
						cnt++;
						cout << i << endl;
					}
				}
				else {
					cnt++;
					cout << i << endl;
				}
			}
			if (i == b[j]) {
				if (cnt == 0)cout << "NA" << endl;
			}
		}
	}
	return 0;
}