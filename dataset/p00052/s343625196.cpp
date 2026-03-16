#include <iostream>

using namespace std;

int main() {

	int a, n;
	while(cin >> n) {
		if(n==0)
			break;
		a=0;
		while(n/=5)
			a+=n;
		cout << a << endl;
	}

	return 0;

}