#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a;
	double answer;
	while (cin >> a) {
		answer = a;
		for (int i = 2; i < 11; ++i) {
			answer+=(i % 2 ? a /= 3.0 : a *= 2.0);
		}
		cout <<setprecision(10)<< answer<<endl;
	}
	return 0;
}