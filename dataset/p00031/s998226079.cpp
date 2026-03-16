#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int n, m;
	while (cin >> n ) {
		bool f = false;
		for (int i = 1; i < 1024; i <<= 1) {
			if (i&n) {
				if (f)cout << " ";
				cout << i;
				f = true;
			}
		}
		cout << endl;
	}
	return 0;
}