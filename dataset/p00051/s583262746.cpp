#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	char ca[8];
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> ca;
		sort(ca, ca + 8);
		string sa = ca;
		reverse(ca,ca+8);
		string sb = ca;
		int p = stoi(sa);
		int q = stoi(sb);
		cout << q - p << endl;
	}
	return 0;
}