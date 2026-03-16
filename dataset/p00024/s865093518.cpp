#include <iostream>
using namespace std;

int main(){
	float v, h;
	int n, a;
	while (true){
		cin >> v;
		if (cin.eof()) { break; }
		h = v * v / 19.6;
		for (n = 0;;n++){
			a = 5 * n - 5;
			if (a >= h) { break; }
		}
		cout << n << endl;
	}
	return 0;
}