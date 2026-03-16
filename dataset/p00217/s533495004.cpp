#include <cstdio>

typedef struct {
	int p, sum;
} Data;

Data fmax_Data(Data x, Data y) {
	return x.sum > y.sum ? x : y;
}

int fmax(int x, int y) {
	return x > y ? x : y;
}

int main(void) {
	while(true) {
		int n;
		scanf("%d", &n);
		if(n == 0)
			break;
		Data max = {0, 0};
		for(int i = 0; i < n; i++) {
			int p, q, r, sum;
			Data t;
			scanf("%d %d %d", &p, &q, &r);
			sum = q + r;
			t.p = p;
			t.sum = sum;
			max = fmax_Data(max, t);
		}
		printf("%d %d\n", max.p, max.sum);
	}
	return 0;
}