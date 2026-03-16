#include<iostream>
using namespace std;

int main() {
	int n;
	int co = 0;
	while (cin>>n&&n!=0) {
		while (n > 4) {
			n /= 5;
			co += n;
		}
		cout << co << endl;
		co = 0;
	}
	return 0;
}