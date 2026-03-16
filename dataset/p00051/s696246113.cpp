#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<string>
using namespace std;
int sort(char str[8], bool grater) {
	for (int i = 0; i < 7; ++i) {
		for (int k = i + 1; k < 8; ++k) {
			if ((grater)?str[i]<str[k]:str[i]>str[k]) {
				swap(str[i], str[k]);
			}
		}
	}
	return atoi(str);
}
int main() {
	char str[8];
	int time;
	cin >> time;
	for (int i = 0; i < time; ++i) {
		cin >> str;
		cout << sort(str, true) - sort(str, false) << endl;
	}
}