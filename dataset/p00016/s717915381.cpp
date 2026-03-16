#include <complex>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define	PI	3.14159265358979323846
#define	DEG2RAD(x)	((x) * PI / 180.)

void inputStr(char *str, size_t len) {
	fgets(str, len, stdin);
	if (str[(len = (strnlen(str, len) - 1))] == '\n') {
		str[len] = '\0';
	} else {
		fflush(stdin);
	}
}

void inputData(int &a, int &b) {
	char *str = new char[512], *tok;
	static const char period[] = ",";
	inputStr(str, 512);
	tok = strtok(str, period);
	if (tok != NULL) {
		a = atoi(tok);
		tok = strtok(NULL, period);
		if (tok == NULL) {
			inputStr(str, 512);
			tok = strtok(str, period);
		}
		b = atoi(tok);
	}
	delete [] str;
}

int main(void) {
	std::complex<double> r(0., 0.);
	int direction = 90;
	int distance, rotateRight;

	for (;;) {
		inputData(distance, rotateRight);
		if (distance == 0 && rotateRight == 0) { break; }
		r += std::polar<double>((double)distance, DEG2RAD((double)direction));
		direction -= rotateRight;
	}
	printf("%d\n%d\n", (int)r.real(), (int)r.imag());
	return 0;
}