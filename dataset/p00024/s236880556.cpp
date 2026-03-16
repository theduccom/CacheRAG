#include <cstdio>
const double g = 9.8;
double pow (double d) {return d * d;}
double y (double d) {return 4.9 * pow(d);}

int main(int argc, char *argv[]) {
	float rcv;
	while (EOF != fscanf(stdin, "%f", &rcv)) {
		double tmp = rcv / g;
		//printf("%f\n", y(tmp));
		for (int i = 2;; i++) {
			if (y(tmp) < static_cast<double>(i * 5 - 5)) {
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}