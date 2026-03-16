#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	(a&&b||c) ? (cout << "Open" << endl) : (cout << "Close" << endl);
}