#include <iostream>
using namespace std;

int main() {
	int n,k;
	while(cin >> n && n>-1) {
		k=1150;
		if (n>30) k+=(n-30)*160+1400+1250;	else if (n>20) k+=(n-20)*140+1250; else if (n>10) k+=(n-10)*125;
		cout << 4280-k << endl;
	}
	return 0;
}