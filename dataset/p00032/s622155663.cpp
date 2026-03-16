#include <stdio.h>

int
main(void)
{
	char line[80];

	int a, b, c;

	int h = 0;
	int r = 0;
	
	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			break;
		}
		if (sscanf(line, "%d,%d,%d", &a, &b, &c) != 3) {
			break;
		}

		if (a*a + b*b == c*c) {
			h ++;
		} else if (a == b) {
			r ++;
		}
	}
	
	printf("%d\n%d\n", h, r);

	return 0;
}