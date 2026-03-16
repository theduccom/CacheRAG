#include <cstdio>
using namespace std;

int l[10], v[2], sum;

int main(){
	while (true) {
		sum = 0;
		for (int i = 0; i < 10; i++) {
			if (scanf("%d,", &l[i]) == EOF) {
				return 0;
			}
			sum += l[i];
		}
		scanf("%d,%d,", &v[0], &v[1]);
		double t = 1.0 * sum / (v[0] + v[1]);
		t *= v[0];
		double loc = 0;
		for (int i = 0; i < 10; i++) {
			loc += l[i];
			if (t <= loc) {
				printf("%d\n", i+1);
				break;
			}
		}
	}

	return 0;
}