#include<iostream>
using namespace std;
int a[3];
int main() {
	cin >> a[0] >> a[1] >> a[2];
	int s = a[0] * 4 + a[1] * 2 + a[2];
	if (s % 2 == 0 && s < 6) { cout << "Close" << endl; }
	else { cout << "Open" << endl; }
}