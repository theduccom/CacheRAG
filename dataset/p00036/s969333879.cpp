#include <cstdio>

using namespace std;

int answer[] = {18, 48, 6, 30, 20, 34, 16};

int main() {
	int i, t, sum;
	char line[10];
	char c, a;

	while(true) {
		t = -1, sum = 0;
		for(i = 0; i < 64; i++) {
			c = getchar();
			if(c == EOF) return 0;
			if(c == '1') {
				if(t == -1) t = i;
				sum += i - t;
			}
			if(i % 8 == 7) getchar();
		}
		getchar();
		for(i = 0; i < 7; i++) {
			if(answer[i] == sum)
			a = 'A' + i;
		}
		printf("%c\n", a);
	}

	return 0;
}