#include<iostream>
#include<string>

using namespace std;

int main() {
	string line;

	getline(cin, line);

	for (auto& a : line) {
		if (a >= 'a' && a <= 'z') {
			// 大文字のほうがASCIIコード上で小さい値
			a -= 'a' - 'A';
		}
	}

	cout << line << endl;

	return 0;
}