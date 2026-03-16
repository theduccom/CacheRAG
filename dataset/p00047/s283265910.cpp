#include<iostream>
using namespace std;

int main() {
	char ball = 'A';
	char x, y, z;
	while (cin >> x >> z >> y){
		if (x == ball) {
			ball = y;
		}
		else if (y == ball){
			ball = x;
		}
	}
	cout << ball;
	cout << endl;
}