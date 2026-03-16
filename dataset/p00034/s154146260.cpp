#include<cstdio>

int main(void) {
	int l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, v1, v2;
	int sum, num;
	double p;

	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l1, &l2, &l3, &l4, &l5, &l6, &l7, &l8, &l9, &l10, &v1, &v2) != EOF) {
		sum = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
		p = (double)sum * v1 / (v1 + v2);
		if(p <= l1) { num = 1; }
		else if(p <= l1 + l2) { num = 2; }
		else if(p <= l1 + l2 + l3) { num = 3; }
		else if(p <= l1 + l2 + l3 + l4) { num = 4; }
		else if(p <= l1 + l2 + l3 + l4 + l5) { num = 5; }
		else if(p <= l1 + l2 + l3 + l4 + l5 + l6) { num = 6; }
		else if(p <= l1 + l2 + l3 + l4 + l5 + l6 + l7) { num = 7; }
		else if(p <= l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8) { num = 8; }
		else if(p <= l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9) { num = 9; }
		else { num = 10; }
		printf("%d\n", num);
	}

	return 0;
}