#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin>>n&&n!=-1){
		int m;
		if (n <= 10) { m = 1150; }
		else if (n <= 20) { m = 1150 + ((n - 10) * 125); }
		else if (n <= 30) { m = 1150 + 1250 + ((n - 20) * 140); }
		else { m = 1150 + 1250 + 1400 + ((n - 30) * 160); }
		cout << 4280-m << endl;
	}
	return 0;
}