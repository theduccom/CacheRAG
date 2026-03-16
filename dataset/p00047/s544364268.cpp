#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	bool ball[3] = {true, false, false};
	char c1, c2;

	while (scanf("%c, %c", &c1, &c2) != EOF) {
		getchar();
		swap(ball[c1 - 65], ball[c2 - 65]);
	}

	for (int i = 0; i < 3; i++) {
		if (ball[i] == true) {
			printf("%c\n", i + 65);
		}
	}

	return 0;
}