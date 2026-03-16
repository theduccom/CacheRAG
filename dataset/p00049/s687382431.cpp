#include <cstdio>
#include <string.h>
using namespace std;


int p, b[4] = { 0 };
char c[4];

int main(){

	while (scanf("%d,%s", &p, c) != EOF) {
		if (strcmp(c, "A") == 0) {
			b[0]++;
		}
		else if (strcmp(c, "B") == 0) {
			b[1]++;
		}
		else if (strcmp(c, "AB") == 0) {
			b[2]++;
		}
		else {
			b[3]++;
		}
	}
	for (int i = 0; i < 4; i++) {
		printf("%d\n", b[i]);
	}

	return 0;
}