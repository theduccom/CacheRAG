#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int tyo = 0, hisi = 0;

	while (true) {
		int a, b, c;
		char knm;
		cin >> a >> knm >> b >> knm >> c;
		if (cin.eof() || a == 0) { break; }

		if(pow(c,2)==pow(a,2)+pow(b,2)){
			tyo++;
		}
		else if(a==b){
			hisi++;
		}
	}
	cout << tyo << endl
		<< hisi << endl;
	return 0;
}