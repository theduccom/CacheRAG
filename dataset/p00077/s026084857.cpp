#include<iostream>
#include<string>
using namespace std;

int main() {
	string run;
	while (cin >> run ) {
		int i = 0;
		while (i < run.size()) {
			if (run[i] == '@') {
				run[i + 1] -= '0';
				for (int j = 0; j < run[i + 1]; j++) {
					cout << run[i + 2];
				}
				i += 3;
			}
			else {
				cout << run[i];
				i += 1;
			}
		}
		cout << endl;
	}
}
