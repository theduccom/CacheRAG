#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	char r;
	int rec, loz;
	rec = 0;
	loz = 0;
	while (cin >> a >> r >> b >> r >> c){
		if (a == b){
			loz += 1;
		}else if (a * a + b * b == c * c){
			rec += 1;
		}
	}
	cout << rec << endl << loz << endl;
}