#include <iostream>
using namespace std;
#define rep(i,n) for (int i=0;i<n;i++)

int main() {
	int n;
	while (cin >> n && n) {
		int two_count = 0;
		int five_count = 0;
		int warukazu = 2;

		while(warukazu <= n) {
			two_count += n / warukazu;
			warukazu *= 2;
		}

		warukazu = 5;
		while (warukazu <= n) {
			five_count += n / warukazu;
			warukazu *= 5;
		}

		cout << (two_count > five_count ? five_count : two_count) << endl;
	}

}