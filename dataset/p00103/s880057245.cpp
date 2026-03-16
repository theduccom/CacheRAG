#include <string>
#include <iostream>
using namespace std;
int N, c1, c2, c3, out, ret; string S;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		c1 = 0, c2 = 0, c3 = 0, out = 0, ret = 0;
		while (out != 3) {
			cin >> S;
			if (S == "HIT") {
				ret += c3, c3 = c2, c2 = c1, c1 = 1;
			}
			else if (S == "HOMERUN") {
				ret += c1 + c2 + c3 + 1, c1 = 0, c2 = 0, c3 = 0;
			}
			else {
				out++;
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}