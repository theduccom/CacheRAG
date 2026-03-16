#include <iostream>
#include <string>
using namespace std;

int main() {
	string words;
	getline(cin, words);
	int change = 'A' - 'a';

	for (int i = 0;i < words.length();i++) {
		if (words.at(i) >= 'a' && words.at(i) <= 'z') {
			words.at(i) += change;
		}
	}

	cout << words << endl;

	return 0;
}