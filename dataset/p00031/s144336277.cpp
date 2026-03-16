#include<iostream>
using namespace std;

int main(){
	int N, total;
	while (cin >> N) {
		for (int i = 0; i < 10; i++) {
			if (N & 1) {
				total = 1 << i;
				cout << total;
				if (N >> 1) {
					cout << ' ';
				}
			}
			N >>= 1;
		}
		cout << endl;
	}
}