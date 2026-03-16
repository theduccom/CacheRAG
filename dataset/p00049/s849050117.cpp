#include<iostream>
#include<string>
using namespace std;

int main() {
	int a;
	char b;
	string c;
	int d[4] = { 0 };
	while (cin >> a >> b) {
		cin >> c;
		if (c == "A"){
			d[0] += 1;
		}
		else if (c == "B"){
			d[1] += 1;
		}
		else if (c == "AB"){
			d[2] += 1;
		}
		else if (c == "O")
		{
			d[3] += 1;
		}
	}
	cout << d[0] << endl << d[1] << endl << d[2] << endl << d[3] << endl;
}