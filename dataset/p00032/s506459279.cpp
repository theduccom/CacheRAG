#include <cstdio>

int main(int argc, char *argv[]) {
	int e1, e2 ,dline, sum_rhom=0, sum_rect=0;
	while (EOF != fscanf(stdin, "%d,%d,%d", &e1, &e2, &dline)) {
		// if has 90-angle
		if (e1*e1+e2*e2 == dline*dline) {
			sum_rect++;
			continue;
		}
		// if rhombic
		if (e1 == e2) {
			sum_rhom++;
			continue;
		}
	}
	printf("%d\n", sum_rect);
	printf("%d\n", sum_rhom);
	return 0;
}