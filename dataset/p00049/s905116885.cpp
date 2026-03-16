#include<iostream>
#include<string>
using namespace std;
string S, T[4] = { "A","B","AB","O" }; int x[4], a; char c;
int main() {
	while (cin>> a >> c >> S) {
		for (int i = 0; i < 4; i++) {
			if (T[i] == S) { x[i]++; }
		}
	}
	cout << x[0] << endl << x[1] << endl << x[2] << endl << x[3] << endl;
}