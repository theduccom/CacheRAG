#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
	int a, b;
	int sum = 0;
	int count = 0;
	double ave = 0;
	string str, str_a, str_b;
	while(cin >> str) {
		count++;
		replace(str.begin(), str.end(), ',', ' ');
		istringstream iss(str);
		iss >> str_a >> str_b;
		a = stoi(str_a);
		b = stoi(str_b);
		sum += a * b;
		ave += b;
	}
	ave /= count;
	if (ave - (int)ave != 0) {
		if (ave - ((int)ave + 0.5) >= 0) ave = (int)(ave + 0.5);
		else ave = (int)ave;
	}
	cout << sum << endl << ave << endl;
	return 0;
}
