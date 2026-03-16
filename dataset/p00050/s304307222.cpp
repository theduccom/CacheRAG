#include <iostream>
#include<string>
#define rep(i,n) for (int i = 0;i<n;i++)
using namespace std;

int main() {
	string words;
	getline(cin, words);

	rep(i, words.size()-4) {
		if (words[i] == 'p'&&words[i + 1] == 'e'&&words[i + 2] == 'a'&&words[i + 3] == 'c'&&words[i + 4] == 'h') {
			rep(j, 5) {
				words[i + j] = 'x';
			}
		}
	}

	rep(i, words.size() - 4) {
		if (words[i] == 'a'&&words[i + 1] == 'p'&&words[i + 2] == 'p'&&words[i + 3] == 'l'&&words[i + 4] == 'e') {
			words[i] = 'p';
			words[i + 1] = 'e';
			words[i + 2] = 'a';
			words[i + 3] = 'c';
			words[i + 4] = 'h';
		}
	}

	rep(i, words.size() - 4) {
		if (words[i] == 'x'&&words[i + 1] == 'x'&&words[i + 2] == 'x'&&words[i + 3] == 'x'&&words[i + 4] == 'x') {
			words[i] = 'a';
			words[i + 1] = 'p';
			words[i + 2] = 'p';
			words[i + 3] = 'l';
			words[i + 4] = 'e';
		}
	}

	cout << words << endl;
	return 0;
}