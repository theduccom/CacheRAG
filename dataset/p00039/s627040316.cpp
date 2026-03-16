#include<iostream>
#include<string>
using namespace std;

int num_from_roma(string roma, int x) {
	if (roma[x] == 'I')return 1;
	else if (roma[x] == 'V')return 5;
	else if (roma[x] == 'X')return 10;
	else if (roma[x] == 'L')return 50;
	else if (roma[x] == 'C')return 100;
	else if (roma[x] == 'D')return 500;
	else if (roma[x] == 'M')return 1000;
}
int main() {
	string roma; int total;
	while (cin >> roma) {
		total = 0;
		for (int i = 0; i < roma.size()-1; i++) {
			if (num_from_roma(roma, i) < num_from_roma(roma, i + 1))total -= num_from_roma(roma, i);
			else total += num_from_roma(roma, i);
		}
		cout << total+num_from_roma(roma,roma.size()-1) << endl;
	}
}
