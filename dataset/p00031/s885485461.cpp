#include <stdio.h>
#include <string.h>

int
main(void)
{
	char line[80];

	int w;

	int f[10];
	int u[10];

	int k = 512;
	for (int& d : f) {
		d = k;
		k >>= 1;
	}

	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			break;
		}
		if (sscanf(line, "%d", &w) != 1) {
			break;
		}

		int p;
		for (p = 0; p < 10; p++) {
			if (w >= f[p]) {
				break;
			}
		}

		memset(u, 0, sizeof u);

		int t = f[p];
		u[p] = 1;
		p++;

		while (true) {
			if (t == w) {
				break;
			} else if (t > w) {
				t -= f[p-1];
				u[p-1] = 0;
			}

			t += f[p];
			u[p] = 1;
			p++;
		}

		const char* sp = "";
		for (int i = 9; i >= 0; i--) {
			if (u[i]) {
				printf("%s%d", sp, f[i]);
				if (*sp == 0) {
					sp = " ";
				}
			}
		}
		printf("\n");

	}

	return 0;
}