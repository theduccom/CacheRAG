#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	double v, y, t;
	while (cin >> v){
		t = v / 9.8;
		y = 4.9 * t * t;
		cout << (int)((y + 5) / 5) + 1 << endl;
	}
}