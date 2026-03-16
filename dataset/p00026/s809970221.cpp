#include <stdio.h>
#include <string.h>

int
main(void)
{
	char line[80];
	int p[10][10];

	memset(p, 0, sizeof p);
	
	auto setp = [&p](int x, int y) {
			if (0 <= x && x < 10 && 0 <= y && y <10) {
				(p[x][y]) ++;
			}
		};
	
	int x, y, s;
	
	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			break;
		}
		if (sscanf(line, "%d,%d,%d", &x, &y, &s) != 3) {
			break;
		}

		if (s == 1) {
			setp(x-1, 	y);
			setp(x, 	y);
			setp(x+1, 	y);
			setp(x, 	y-1);
			setp(x, 	y+1);
			
		} else if (s == 2) {
			for (int dx = -1; dx <= 1; dx++) {
				for (int dy = -1; dy <= 1; dy++) {
					setp(x+dx, y+dy);
				}
			}
		} else {
			for (int dx = -1; dx <= 1; dx++) {
				for (int dy = -1; dy <= 1; dy++) {
					setp(x+dx, y+dy);
				}
			}
			setp(x-2, 	y);
			setp(x+2, 	y);
			setp(x, 	y-2);
			setp(x, 	y+2);
		}
	}

	int b = 0;
	int k = 0;
	for (int y = 0; y < 10; y++) {
		for (int x = 0; x < 10; x++) {
			if (p[x][y] == 0) {
				b++;
			} else if (k < p[x][y]) {
				k =  p[x][y];
			}
		}
	}

	printf("%d\n%d\n", b, k);

	return 0;
}