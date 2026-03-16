#include <iostream>
#include <math.h>
using namespace std;

int main() {
	short int n;
	while (cin >> n) {
		for(int i=1; n>0; i*=2,n/=2){
			if (n % 2 == 1) {
				cout << i;
				if (n > 1)
					cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
