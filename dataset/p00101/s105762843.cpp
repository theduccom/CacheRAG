#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n; scanf("%d\n", &n);

	string rect = "Hoshino";

	for (int t = 0; t < n; ++t) {
		char c; int pos = 0;
		while ((c = getchar()) != EOF) {
			if (c != rect[pos]) pos = c == rect[0];
			else if (++pos == rect.size()) pos = 0, c = 'a';
			cout << c;
		}
	}
}